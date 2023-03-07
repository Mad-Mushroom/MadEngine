#include "main.h"

//GeneralInfo generalInfo;

void setAuthor(const char* author){
	generalInfo.author = author;
}

void setVersion(float version){
	generalInfo.version = version;
}

void incrementVersion(){
	generalInfo.version += 0.1;
}
