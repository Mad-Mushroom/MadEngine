#pragma once

#include "../main.h"

using namespace std;

enum ObjectTypes {
	Empty,
	Sprite
};

class singleObject {
	public:
		const char* Name;
		int index;
		ObjectTypes ObjectType;
		Properties ObjectProperties;
};
