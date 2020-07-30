
#include "Tile.h"
#include <iostream>
#include <string>



void Tile::Initialize(int start_posX, int start_posY, TileType start_type) {
	type = start_type;
	posX = start_posX;
	posY = start_posY;
}

void Tile::Draw() {
	if (type == TileType::Land)
		DrawRectangle(posX, posY, Tile::width, Tile::height, DARKGREEN);
	else
		DrawRectangle(posX, posY, Tile::width, Tile::height, BLUE);
}