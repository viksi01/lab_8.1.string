#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.1.string/lab_8.1.string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str{ "aaboocba" };
			int t = Count(str);
			Assert::AreEqual(t, 2);

		}
	};
}
