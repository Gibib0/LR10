#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Завдання Р-3");

    Console::Write(L"Input the first string: ");
    String^ first = Console::ReadLine();

    Console::Write(L"Input the second string: ");
    String^ second = Console::ReadLine();

    int result(String::Compare(first, second));

    if (result < 0)
        Console::WriteLine(L"'{0}' is smaller than '{1}'", first, second);
    else if (result > 0)
        Console::WriteLine(L"'{1}' is smaller then '{0}'", first, second);
    else
        Console::WriteLine(L"'{0}' equals '{1}'", first, second);
}
