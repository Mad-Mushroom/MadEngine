#pragma once

#include "main.h"

class GeneralInfo {
	public:
		int winSizeX;
		int winSizeY;
		const char* winTitle;
		int targetFps;
		const char* author;
		float version;
		int introType = 1; // 0 - None, 1 - Normal, 2 - with Author
};

extern GeneralInfo generalInfo;
