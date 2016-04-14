#pragma once
#include "Letter.h"
class Word : public Letter
{
	static int counter;
	int m_length;
	Letter* word;
public:
	Word();
	Word(char*);
	~Word();
	void printWord();
};

