#pragma once
#include <iostream>

class String
{
	char* mArray;

public:
	String(const char* input);
	~String();

	void Print();
};

