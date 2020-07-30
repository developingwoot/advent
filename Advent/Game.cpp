#include "Game.h"
#include "raylib.h"
#include "Player.h"
#include "Tile.h"
#include <vector>
#include <stdlib.h>
#include <time.h>

Player player;
std::vector<Tile> tiles;

bool Game::Initialize() {
    // Initialization
    //--------------------------------------------------------------------------------------

    fillPercent = 80;

    InitWindow(screenWidth, screenHeight, "Game");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second

    srand(time(NULL));

    //--------------------------------------------------------------------------------------
    
    GenerateTerrain();

    player.Initialize();

    return 0;
}

void Game::GameLoop() {
    // Main game loop

    

    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------


        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        
        DrawTerrain();

        player.HandleInput();

        if (IsKeyReleased(KEY_ESCAPE)) Shutdown();

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    Shutdown();
}

void Game::GenerateTerrain() {

    for (int posY = 0; posY < screenWidth; posY = posY + Tile::height) {
        for (int posX = 0; posX < screenWidth; posX = posX + Tile::width) {

            Tile tile;
            TileType type;
            int random = std::rand() % 100 + 1;


            if (posX == 0 || posX == (screenWidth - Tile::width) || posY == 0 || posY == (screenHeight - Tile::height)) {
                type = TileType::Land;
            }
            else
            {
                if (random < fillPercent)
                    type = TileType::Land;
                else
                    type = TileType::Water;
            }
            

            tile.Initialize(posX, posY, type);
            tiles.push_back(tile);
            
            
        }
    }

    for (int i = 0; i < 5; i++)
    {
        SmoothTerrain();
    }

}

void Game::SmoothTerrain() {

}

void Game::GetSurroundingLandCount() {
    int landCount = 0;
    for(int nexbo)
}

void Game::DrawTerrain() {
    for (int i = 0; i < tiles.size(); i++) {
        tiles[i].Draw();
        
    }
}

void Game::Shutdown() {
    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
}