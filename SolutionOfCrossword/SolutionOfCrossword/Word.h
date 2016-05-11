#pragma once
#include <string>
class Word
{
	std::string m_word;
	bool m_found;
public:
	void Clear();
	void SetWord(const char*);
	std::string GetWord();
	bool IsFound();
	void Found();
	Word();
	~Word();
};

