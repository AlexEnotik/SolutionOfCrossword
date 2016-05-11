#include "Letter.h"



Letter::~Letter()
{
}

void Letter::SetChar(char value) {
	cValue = value;
}

void Letter::SetColor(int color) {
	iColor = color;
}

void Letter::SetX(int x) {
	iX = x;
}

void Letter::SetY(int y) {
	iY = y;
}

void Letter::SetDirection(int i, bool value) {
	iDirection[i] = value;
}

char Letter::GetChar() {
	return cValue;
}
int Letter::GetX() {
	return iX;
}

int Letter::GetY() {
	return iY;
}

int Letter::GetColor() {
	return iColor;
}
bool Letter::GetDirection(int i) {
	return iDirection[i];
}