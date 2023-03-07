#include "src/mad2d.h"

void Start(){
	setAuthor("MadMushroom");
	setVersion(0.2);
	initWindow(500, 500, "GAME");
	targetFPS(50);
}

void Update(){
	displayText("Hello World!", 10, 10, 20);
	displayText("Some other Text", 50, 50, 10);
	incrementVersion();
}
