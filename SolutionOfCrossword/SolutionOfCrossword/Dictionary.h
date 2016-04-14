#pragma once
#include "Word.h"
#include <stdio.h>
class Dictionary : public Word
{
	int m_number;
	Word* dictionary;
public:
	Dictionary();
	Dictionary(FILE*);
	~Dictionary();
};

