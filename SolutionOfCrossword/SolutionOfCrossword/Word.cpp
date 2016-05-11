#include "Word.h"



Word::Word():m_word(""), m_found(false)
{
}


Word::~Word()
{
}

void Word::Clear() {
	m_word.clear();
	m_found = false;
}

void Word::SetWord(const char* word) {
	m_word = word;
}

std::string Word::GetWord() {
	return m_word;
}

void Word::Found() {
	if (m_found == true) return;
	m_found = true;
}

bool Word::IsFound() {
	return m_found;
}