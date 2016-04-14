#include "Letter.h"



Letter::Letter() :m_ix(0), m_iy(0), m_value('0') {}


Letter::~Letter()
{
}
void Letter::SetValue(char symbol) {
	m_value = symbol;
}
