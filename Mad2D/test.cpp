#include "src/mad2d.h"

void Start(){
	setAuthor("MadMushroom");
	showIntro(false);
	initWindow(500, 500, "GAME");
	Environment.CreateNewEnvironment("Test");
	Environment.GetEnvironmentByName("Test").AddObject("TestObj", ObjectTypes::Sprite);
	Environment.GetEnvironmentByName("Test").AddObject("TestObj2", ObjectTypes::Empty);
	Environment.GetEnvironmentByName("Test").AddObject("TestObj3", ObjectTypes::Empty);
	Environment.GetEnvironmentByName("Test").AddObject("TestObj4", ObjectTypes::Empty);
}

void Update(){
	displayText("Hello World!", 10, 10, 20);
}
