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
};

extern GeneralInfo generalInfo;
