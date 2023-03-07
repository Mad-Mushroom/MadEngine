#pragma once

/* General */
void Start();
void Update();

/* Metadata */
void setAuthor(const char* author);
void setVersion(float version);
void incrementVersion();

/* Window Stuff */
void initWindow(int sizeX, int sizeY, const char* title);
void targetFPS(int fps);

/* Text Stuff */
void displayText(const char* text, int posX, int posY, int fontSize);
