#pragma once

#include <string>
#include <vector>
#include "Word.h"

#define BUFFER_SIZE 64

class Dictionary
{
	
	std::vector<Word> m_aWordsList;
	bool LoadDictionary(const char* FileName);
	
public:
	Dictionary();
	Dictionary(const char* FileName);
	~Dictionary();

	void AddWord(const char* NewWord);
	void Clear(const int MaxWordLenght);
	int Size();
	Word GetWord(int index);
	char GetChar(int word, int index);
	bool isFound(int index);
	void Found(int index);
};