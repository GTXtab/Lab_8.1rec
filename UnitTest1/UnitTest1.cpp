#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1rec/Lab_8.1rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char testStr[] = ",0- hello world";
			Assert::AreEqual(Count(testStr, 0), 1);
		}
	};
}
