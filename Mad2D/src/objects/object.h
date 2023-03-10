#pragma once

#include "../main.h"

enum types {
	Empty,
	Sprite
};

class Object {
	public:
		const char* Name;
		int index;
		Properties objectProperties;
};
