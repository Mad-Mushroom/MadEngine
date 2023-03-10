#pragma once

#include "../main.h"

extern int environmentsCount;

class Environment {
	public:
		const char* name;
		int index;
		Object objects[256];
};

extern Environment environments[256];
