#pragma once

#include <time.h>
#include <iostream>
#include "Dictionary.h"
#include "Letter.h"
#include <math.h>
class Crossword
{
	enum Direction {
		Top,
		Right,
		Bottom,
		Left
	};
	
	
	Dictionary *m_pDictionary;
	std::vector<std::vector<Letter>> m_aCrosswordBoard;
	//std::vector<std::string> m_aWords;
	//uint64_t nCountCycle;/*

	bool SetChar(const char Letter, const int X, const int Y);
	char GetChar(const int X, const int Y);
	int GetColor(int X, int Y);
	bool SetColor(int iColor, int X, int Y);
	/*void AddWordToBoard(std::string Word, int* x, int* y);
	void SearchClosedCell(int* x, int* y);
	void SearchNextCell(std::vector<Direction>* AvailableDirection, int* x, int* y);
	void CheckCellsAround(std::vector<Direction>* AvailableDirection, int x, int y);
	int CheckOneCell(int x, int y);*/
	bool LoadCrossword(const char*FileName);

public:
	//Crossword(Dictionary* Dictionary, const int MaxWordLenght);
	Crossword(const char*);
	~Crossword();

	void SolveCrossword(Dictionary* Dictionary);
	/*void GenerateCrossword();
	void OutputCrossword();*/
};

