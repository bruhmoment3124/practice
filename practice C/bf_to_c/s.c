#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* append string */
char * app(char *str, const char *cat)
{
    str = realloc(str, strlen(str) + strlen(cat) + 1);
    strcat(str, cat);
    
    return str;
}

/* append number, fails for 0 */
char * app_num(char *str, int n)
{
    char *cat = malloc((int)((ceil(log10(n))+1)*sizeof(char)));
    sprintf(cat, "%d", n);
    
    str = realloc(str, strlen(str) + strlen(cat) + 1);
    strcat(str, cat);
    
    free(cat);
    
    return str;
}

struct stack
{
    int *arr;
    int top;
};

struct stack * create_st(struct stack *st)
{
    st = malloc(sizeof(struct stack));
    st->arr = NULL;
    st->top = 0;
    
    return st;
}

struct stack * push_st(struct stack *st, int val)
{
    st->arr = realloc(st->arr, st->top+1);
    st->arr[st->top] = val;
    st->top++;
    
    return st;
}

struct stack * pop_st(struct stack *st)
{
    if(st->top != 0)
    {
        st->arr = realloc(st->arr, st->top-1);
        st->top--;
    } else
    {
        printf("ERROR!\n");
        exit(-1);
    }
    
    return st;
}

int main(int argc, char *argv[])
{
	char *bf;
	long length;
	FILE *f = fopen(argv[1], "rb");
	
	fseek(f, 0, SEEK_END);
	length = ftell(f);
	fseek(f, 0, SEEK_SET);
	bf = malloc(length + 1);
	fread(bf, 1, length, f);
	fclose(f);
	bf[length] = '\0';
	
    struct stack *st = create_st(st);
    
    char *str = calloc(1, 1);
    str = app(str, "#include <stdio.h>\n#include <stdint.h>\n\nint main(void)\n{\n\tuint8_t mem[30000] = {0}, *p = mem;\n\n");
    
    int labels = 1;
    char *ahead;
    for(ahead = bf; *ahead != '\0'; ahead++)
    {
        if(*ahead == '>')
        {
            int num_of_rights = 1;
            for(ahead; *(ahead+1) == '>'; ahead++) num_of_rights++;
            str = app(str, "\tp += ");
            str = app_num(str, num_of_rights);
            str = app(str, ";\n");
        }
        
        if(*ahead == '<')
        {
            int num_of_lefts = 1;
            for(ahead; *(ahead+1) == '<'; ahead++) num_of_lefts++;
            str = app(str, "\tp -= ");
            str = app_num(str, num_of_lefts);
            str = app(str, ";\n");
        }
        
        if(*ahead == '+')
        {
            int num_of_pluses = 1;
            for(ahead; *(ahead+1) == '+'; ahead++) num_of_pluses++;
            str = app(str, "\t*p += ");
            str = app_num(str, num_of_pluses);
            str = app(str, ";\n");
        }
        
        if(*ahead == '-')
        {
            int num_of_minuses = 1;
            for(ahead; *(ahead+1) == '-'; ahead++) num_of_minuses++;
            str = app(str, "\t*p -= ");
            str = app_num(str, num_of_minuses);
            str = app(str, ";\n");
        }
        
        if(*ahead == '.') str = app(str, "\tprintf(\"%c\", *p);\n");
        
        if(*ahead == '[')
        {
            str = app(str, "\tif(*p == 0) goto l");
            str = app_num(str, labels);
            str = app(str, ";\n");
            str = app(str, "\tl");
            labels++;
            str = app_num(str, labels);
            str = app(str, ":\n");
            st = push_st(st, labels);
            labels++;
        }
        
        if(*ahead == ']')
        {
            str = app(str, "\tif(*p != 0) goto l");
            str = app_num(str, st->arr[st->top-1]);
            str = app(str, ";\n");
            str = app(str, "\tl");
            str = app_num(str, st->arr[st->top-1]-1);
            str = app(str, ":\n");
            st = pop_st(st);
        }
    }
    
    str = app(str, "\n\treturn 0;\n}");
    
	FILE *out = fopen("out.c", "wb");
	
	fputs(str, out);
	fclose(out);
	
    free(str);
    
    return 0;
}