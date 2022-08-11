#include "String.h"
#include <iostream>

String::String(const char* input)
{
	// input ���� ����ڳ�
	// ���ڿ� ���ͷ��� �ݵ�� null character ����
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
	// input -> ���� mArray ä��
}

String::~String()
{
	delete[] mArray;
}

void String::Print()
{
	std::cout << "// " << mArray << std::endl;
}
