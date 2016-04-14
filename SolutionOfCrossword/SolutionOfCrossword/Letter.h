#pragma once
#include "string.h"
class Letter
{
	char m_value;
	int m_ix, m_iy;
	enum color {};
public:
	void SetValue(char);
	Letter();
	~Letter();
};

