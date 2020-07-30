/*******************************************************************************************
*
*   raylib [text] example - Input Box
*
*   This example has been created using raylib 1.7 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2017 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>
#include <ctime>

#include "Game.h"

int main(void)
{
	Game game;
	game.Initialize();
	game.GameLoop();

	return 0;
}