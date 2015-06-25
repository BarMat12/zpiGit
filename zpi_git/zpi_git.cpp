//Project tested used basic Microsoft library from VisualStudio2013 -> CppUnitTestFramework
//Library in file CppUnitTest.h
//more info on official Microsoft page

/*
Convention:
- Methods are clear and easy to understand - comments are not necesarry
- Methods are public due to the fact that we need do tdd
- Fields and methods name start with small letter, if name consists of two words, second word starts with large letter
- Methods are short
*/

#include "stdafx.h"
#include <string>
#include <iostream>
#include <inttypes.h>

using namespace std;

class LProduct
{
public:
	int run()
	{
		int i = 1;
		return i;
	}
	int print();
	uint64_t multiply(int i, uint64_t product);
	uint64_t checkValue(uint64_t largestProduct, uint64_t product);
	uint64_t loop();
	///////////////////////////////////////////////////////////////
	LProduct(){};
	~LProduct(){};
	///////////////////////////////////////////////////////////////
	const string Number;
	int Size = 13;
	uint64_t largestProduct;
};

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

