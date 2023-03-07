#include "main.h"

GeneralInfo generalInfo;

void initWindow(int sizeX, int sizeY, const char* title){
	InitWindow(sizeX, sizeY, title);
	SetTargetFPS(60);
	generalInfo.targetFps = 60;
	generalInfo.winSizeX = sizeX;
	generalInfo.winSizeY = sizeY;
	generalInfo.winTitle = title;
}

void targetFPS(int fps){
	SetTargetFPS(fps);
	generalInfo.targetFps = fps;
}
