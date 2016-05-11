#pragma once
class Letter
{
	int iX, iY;
	bool iDirection[4];
	char cValue;
	int iColor;
	
public:
	Letter() : iX(0), iY(0), cValue('0'), iColor(0) {
		for (int i(0); i < 4; i++) {
			iDirection[i] = true;
		}
	}
	~Letter();

	void SetChar(char value);
	void SetX(int x);
	void SetY(int y);
	void SetColor(int color);
	void SetDirection(int i, bool value);
	char GetChar();
	int GetX();
	int GetY();
	int GetColor();
	bool GetDirection(int i);
};

