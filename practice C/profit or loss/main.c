#include <stdio.h>

int main(void)
{
	/*profit from today and profit from yesterday*/
	int pt,py; /*pt is profit from today and py is profit from yesterday*/
	int tp; /*total profit*/
	
	/*asks what profit you made and then scans for input*/
	printf("enter in your profit from today:\n");
	scanf("%d", &pt);
	printf("enter in your profit from yesterday:\n");
	scanf("%d", &py);
	
	/*gets total profit from today and compares it to yesterdays profit*/
	tp = pt -= py;
	if(pt > py) /*if todays profit is more than yesterdays profit*/
	{	
		printf("you made %d more dollars than yesterday\n", tp);
	} else /*this else is basically for if someone enters in a character or the same number*/
	{
		printf("you made %d dollars of profit\n", tp);
	}
	
	return 0;
}