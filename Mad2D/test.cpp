#include "src/mad2d.h"

void Start(){
	setAuthor("MadMushroom");
	//setIntroAuthorDisplay(true);
	initWindow(500, 500, "GAME");
	Environment.CreateNewEnvironment("Test");
	Environment.GetEnvironmentByName("Test").AddObject("TestObj", ObjectTypes::Sprite);
	Environment.GetEnvironmentByName("Test").AddObject("TestObj2", ObjectTypes::Empty);
	//cout << Environment.Environments[0].ObjectCount << endl;
	//cout << Environment.GetEnvironmentByName("Test").GetObjectbyName("test").Name << endl;
}

void Update(){
	displayText("Hello World!", 10, 10, 20);
}
