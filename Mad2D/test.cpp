#include "src/mad2d.h"

void Start(){
	setAuthor("MadMushroom");
	initWindow(500, 500, "GAME");
	Environment.createNewEnvironment();
}

void Update(){
	displayText("Hello World!", 10, 10, 20);
	displayText("Some other Text", 50, 50, 10);
	displayText("Third Text, because i dont have anything else to display", 1, 100, 15);
}
