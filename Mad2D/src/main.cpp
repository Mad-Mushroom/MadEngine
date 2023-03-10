#include "main.h"

Environments Environment;

int main(){
	Start();
	//displayIntro();
	while(!WindowShouldClose()){
		Update();
	}
	cout << "Goodbye!" << endl;
	return 0;
}
