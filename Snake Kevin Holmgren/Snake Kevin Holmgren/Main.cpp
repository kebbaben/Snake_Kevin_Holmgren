#include <iostream>
#include "Game.h"

#if _DEBUG
int main()
#else
#include <Windows.h>
int __stdcall WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
#endif
{
	Game g;
	g.Start();
#if _DEBUG
	while(true){}
#endif
	return 0;
}