#pragma once

#include "../main.h"

using namespace std;

class singleEnvironment {
	public:
		/* Variables */
		const char* Name;
		int index;
		int ObjectCount;
		singleObject Objects[256];

		/* Functions */
		void AddObject(const char* Name, ObjectTypes ObjectType){
			Objects[ObjectCount].ObjectType = ObjectType;
			Objects[ObjectCount].Name = Name;
			Objects[ObjectCount].index = ObjectCount;
			ObjectCount++;
			cout << ObjectCount << endl;
		}

		singleObject GetObjectbyName(const char* Name){
			for(int i=0; i<ObjectCount; i++){
				if(Objects[i].Name == Name) return Objects[i];
			}
		}
};

class Environments {
	public:
		/* Variables */
		singleEnvironment Environments[256];
		int EnvironmentCount;

		/* Functions */
		void CreateNewEnvironment(const char* Name){
			Environments[EnvironmentCount].Name = Name;
			Environments[EnvironmentCount].index = EnvironmentCount;
			EnvironmentCount++;
		}

		singleEnvironment GetEnvironmentByName(const char* Name){
			for(int i=0; i<EnvironmentCount; i++){
				if(Environments[i].Name == Name) return Environments[i];
			}
		}

		singleEnvironment GetEnvironmentByIndex(int Index){
			return Environments[Index];
		}
};

extern Environments Environment;
