#include <iostream>
#include <raylib.h>


int main()
{
	constexpr char WINDOW_TITLE[] = "Galaxiators";
	constexpr int WINDOW_WIDTH = 1920;
	constexpr int WINDOW_HEIGHT = 1080;
	
	std::cout << GetMonitorCount();

	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);
	SetTargetFPS(60);
	GetWindowScaleDPI();

	while (!WindowShouldClose())
	{
	
		BeginDrawing();

		ClearBackground(BLACK);

		DrawText("Galaxiators", WINDOW_WIDTH/2, WINDOW_HEIGHT/2, 50, WHITE);

		EndDrawing();
	}
	

	return 0;
}