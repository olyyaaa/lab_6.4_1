#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.4_1/lab_6.4_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest641
{
	TEST_CLASS(UnitTest641)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[8] = { 1, 10, 2, 1, 1, 1, 1, 1 };

			int expected = product(a, 8);

			Assert::AreEqual(expected, 2);
		}
	};
}
