#pragma once
class Game
{
	int** map = new int*[50];
	int fillPercent;
	int GetSurroundingLandCount();
public:
	static const int screenWidth = 800, screenHeight = 600;
	bool Initialize();
	void GameLoop();
	void Shutdown();
	void GenerateTerrain();
	void SmoothTerrain();
	void DrawTerrain();
};

