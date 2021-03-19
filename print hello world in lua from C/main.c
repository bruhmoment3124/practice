#include <lua/lua.h>
#include <lua/lualib.h>
#include <lua/lauxlib.h>

int main(void)
{
	char *luafunc = "print('Hello World')"; /*function to print Hello World*/
	
	lua_State *L = luaL_newstate(); /*create a lua*/
	luaL_openlibs(L); /*lua library*/
	luaopen_string(L); /*string libraries*/
	
	if(luaL_loadstring(L, luafunc) == LUA_OK)
	{
		if(lua_pcall(L, 0, 1, 0) == LUA_OK)
		{
			lua_pop(L, lua_gettop(1)); /*pop lua stack*/
		}
	}
	
	lua_close(L); /*close */

	return 0;
}