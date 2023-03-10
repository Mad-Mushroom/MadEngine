#include "main.h"

void displayIntro(){
	BeginDrawing();
		DrawText("Powered by Mad2D Engine", 1, 1, 20, WHITE);
	EndDrawing();
	WaitTime(2);
	BeginDrawing();
		ClearBackground(BLACK);
	EndDrawing();
}
