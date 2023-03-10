#pragma once

#include "../main.h"

using namespace std;

class singleEnvironment {
	public:
		const char* name;
		int index;
		Object objects[256];
};

class Environments {
	public:
		singleEnvironment Environments[256];
		int EnvironmentCount;

		void CreateNewEnvironment(const char* Name){
			Environments[EnvironmentCount].name = Name;
			Environments[EnvironmentCount].index = EnvironmentCount;
			EnvironmentCount++;
		}
};

extern Environments Environment;
