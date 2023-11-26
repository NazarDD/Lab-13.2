#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 13.2/Lab 13.2.cpp"
#include <iostream>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace YourProjectTests
{
    TEST_CLASS(MacroFunctionsTest)
    {
    public:

        TEST_METHOD(TestMacroFunctions)
        {
            // Arrange
            int x = 5, y = 10;

            // Act
            int result = MAX(x, y);

            // Assert
            Assert::AreEqual(result, y);
        }
    };
}
