#include "main.h"

int main(){
	Start();
	while(!WindowShouldClose()){
		Update();
	}
	cout << generalInfo.author << endl;
	cout << generalInfo.version << endl;
	cout << "Goodbye!" << endl;
	return 0;
}
