#include "raylib.h"

enum class TileType { Unassigned, Land, Water };

class Tile
{
public:
	int posX = 0, posY = 0;
	static const int width = 16, height = 12;
	Color color = GREEN;
	TileType type;
	void Initialize(int, int, TileType);
	void Draw();
};


