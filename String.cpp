#include "String.h"
#include <iostream>

String::String(const char* input)
{
	// input 현재 몇글자냐
	// 문자열 리터럴은 반드시 null character 끝남
	int length{ 1 };
	const char* ptr = input;

	while (*ptr != '\0')
	{
		ptr++;
		length++;
	}
	mArray = new char[length];

	for (int i = 0; i < length; i++)
	{
		mArray[i] = input[i];
	}
	// input -> 복사 mArray 채움
}

String::~String()
{
	delete[] mArray;
}

void String::Print()
{
	std::cout << "// " << mArray << std::endl;
}
