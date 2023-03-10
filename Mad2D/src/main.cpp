#include "main.h"

int main(){
	Start();
	//displayIntro();
	while(!WindowShouldClose()){
		Update();
	}
	cout << "Goodbye!" << endl;
	return 0;
}
