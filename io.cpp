#include "io.h"

void writeAnswer(int)
{
    std::cout << "Hello lashya";
}

int readNumber()
{
    std::cout << "Enter a number: ";
    int inputNumber{};
    std::cin >> inputNumber;
    return inputNumber;
}

