#include "pch.h"
#include "CppUnitTest.h"
#include "../laba8.1rek/laba8.1rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            char text[99] = "hellowhile hello";
            int actual = IsOrNot(text);
            Assert::AreEqual(1, actual);
        }
    };
}