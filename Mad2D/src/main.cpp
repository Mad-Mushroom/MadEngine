#include "main.h"

Environments Environment;

int main(){
	cout << "Starting Mad2D Engine..." << endl;
	cout << "Initializing..." << endl;
	Start();
	cout << "Done." << endl;
	cout << "Loading..." << endl;
	displayIntro();
	cout << "Done." << endl;
	while(!WindowShouldClose()){
		Update();
	}
	cout << "MadEngine successfully closed." << endl;
	return 0;
}
