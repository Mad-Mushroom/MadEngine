#include "src/mad2d.h"

void Start(){
	setAuthor("MadMushroom");
	initWindow(500, 500, "GAME");
	Environment.CreateNewEnvironment("Test");
}

void Update(){
	displayText("Hello World!", 10, 10, 20);
}
