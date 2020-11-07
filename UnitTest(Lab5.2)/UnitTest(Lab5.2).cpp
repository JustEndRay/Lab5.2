#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.2(1)/Lab5.2(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab52
{
	TEST_CLASS(UnitTestLab52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = F(5, 8);
			Assert::AreEqual(t, 0.03);
		}
	};
}
