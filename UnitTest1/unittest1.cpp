#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\zpi_git\zpi_git.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(run)
		{
			LProduct test;
			Assert::AreEqual(1, test.run());
		}
	};
}