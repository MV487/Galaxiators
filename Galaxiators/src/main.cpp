#include <iostream>
#include <raylib.h>


int main()
{
	constexpr char WINDOW_TITLE[] = "Galaxiators";
	constexpr int WINDOW_WIDTH = 1080;
	constexpr int WINDOW_HEIGHT = 1090;

	InitWindow(1080, 1090, WINDOW_TITLE);
	SetTargetFPS(60);


	while (!WindowShouldClose())
	{

		BeginDrawing();
		ClearBackground(BLACK);

		DrawText("Galaxiators", WINDOW_WIDTH/2, WINDOW_HEIGHT/2, 32, WHITE);

		EndDrawing();
	}
	

	return 0;
}