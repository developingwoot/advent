#pragma once
#include "raylib.h"

class Player
{
public:
	float speed;
	Vector2 position;
	void Initialize();
	void HandleInput();
};

