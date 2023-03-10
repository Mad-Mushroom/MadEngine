#pragma once

#include "../main.h"

using namespace std;

extern int environmentsCount;

class singleEnvironment {
	public:
		const char* name;
		int index;
		Object objects[256];
};

class Environments {
	public:
		singleEnvironment environments[256];
		void createNewEnvironment(){
			cout << "i hate my life" << endl;
		}
};

extern Environments Environment;
