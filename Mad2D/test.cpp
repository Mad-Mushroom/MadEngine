#include "src/mad2d.h"

void Start(){
	setAuthor("MadMushroom");
	//setIntroAuthorDisplay(true);
	initWindow(500, 500, "GAME");
	Environment.CreateNewEnvironment("Test");
	Environment.GetEnvironmentByName("Test").AddObject("Hi :D");
}

void Update(){
	displayText("Hello World!", 10, 10, 20);
}
