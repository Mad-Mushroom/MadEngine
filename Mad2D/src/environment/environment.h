#pragma once

#include "../main.h"

using namespace std;

class singleEnvironment {
	public:
		/* Variables */
		const char* name;
		int index;
		int ObjectCount;
		Object objects[256];

		/* Functions */
		void AddObject(const char* Name, type ObjectType){

		}
};

class Environments {
	public:
		/* Variables */
		singleEnvironment Environments[256];
		int EnvironmentCount;

		/* Functions */
		void CreateNewEnvironment(const char* Name){
			Environments[EnvironmentCount].name = Name;
			Environments[EnvironmentCount].index = EnvironmentCount;
			EnvironmentCount++;
		}
};

extern Environments Environment;
