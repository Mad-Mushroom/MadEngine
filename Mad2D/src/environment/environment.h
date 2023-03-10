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
		void AddObject(const char* Name){
			cout << Name << endl;
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

		singleEnvironment GetEnvironmentByName(const char* Name){
			for(int i=0; i<EnvironmentCount; i++){
				if(Environments[i].name == Name) return Environments[i];
			}
		}

		singleEnvironment GetEnvironmentByIndex(int Index){
			return Environments[Index];
		}
};

extern Environments Environment;
