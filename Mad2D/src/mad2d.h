#pragma once

/* General */
void Start();
void Update();

/* Console */
void print(const char* text);

/* Metadata */
void setAuthor(const char* author);
void setVersion(float version);
void incrementVersion();

/* Window Stuff */
void initWindow(int sizeX, int sizeY, const char* title);
void targetFPS(int fps);

/* Text Stuff */
void displayText(const char* text, int posX, int posY, int fontSize);

/* Environment */
void createNewEnvironment();
