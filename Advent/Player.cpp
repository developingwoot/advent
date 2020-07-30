#include "Player.h"
#include "Game.h"

void Player::Initialize() {
    position = { (float)Game::screenWidth / 2, (float)Game::screenHeight / 2 };
    speed = 2;
}


void Player::HandleInput() {
    if (IsKeyDown(KEY_RIGHT)) position.x += 2.0f * speed;
    if (IsKeyDown(KEY_LEFT)) position.x -= 2.0f * speed;
    if (IsKeyDown(KEY_UP)) position.y -= 2.0f * speed;
    if (IsKeyDown(KEY_DOWN)) position.y += 2.0f * speed;

    DrawRectangle(position.x, position.y, 10, 10, ORANGE);
}
