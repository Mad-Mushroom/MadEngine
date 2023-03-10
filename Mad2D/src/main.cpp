#include "main.h"

Environments Environment;

int main(){
	Start();
	displayIntro();
	while(!WindowShouldClose()){
		Update();
	}
	cout << "MadEngine successfully closed." << endl;
	return 0;
}
