#include "main.h"

void displayText(const char* text, int posX, int posY, int fontSize){
	BeginDrawing();
		DrawText(text, posX, posY, fontSize, WHITE);
	EndDrawing();
}
