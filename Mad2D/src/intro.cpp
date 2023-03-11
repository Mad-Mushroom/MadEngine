#include "main.h"

void showIntro(bool displayIntro){
	if(displayIntro) generalInfo.introType = 1;
	if(!displayIntro) generalInfo.introType = 0;
}

void setIntroAuthorDisplay(bool displayAuthor){
	if(displayAuthor) generalInfo.introType = 2;
	if(!displayAuthor) generalInfo.introType = 1;
}

void displayIntro(){
	if(generalInfo.introType == 1){
		BeginDrawing();
			DrawText("Powered by Mad2D Engine", 1, 1, 20, WHITE);
		EndDrawing();
		WaitTime(2);
		BeginDrawing();
			ClearBackground(BLACK);
		EndDrawing();
	}
	if(generalInfo.introType == 2){
		BeginDrawing();
			DrawText(generalInfo.author, 1, 1, 20, WHITE);
			DrawText("Powered by Mad2D Engine", 1, 20, 20, WHITE);
		EndDrawing();
		WaitTime(2);
		BeginDrawing();
			ClearBackground(BLACK);
		EndDrawing();
	}
}
