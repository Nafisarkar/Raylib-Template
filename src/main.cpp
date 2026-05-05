#include "raylib.h"

int main() {
  InitWindow(1280, 720, "RAYLIB TEMPLATE");
  SetTargetFPS(60);
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);
    DrawText("Wellcome To Raylib", 10, 10, 20, WHITE);
    EndDrawing();
  }

  return 0;
}