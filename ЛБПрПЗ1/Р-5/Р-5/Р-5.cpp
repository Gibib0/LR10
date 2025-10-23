#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Завдання Р-5");

    Console::Write(L"Input the first string: ");
    String^ firstString = Console::ReadLine();

    Console::Write(L"Input the second string: ");
    String^ secondString = Console::ReadLine();

    if (firstString->Length > secondString->Length)
        Console::WriteLine(L"The string '{0}' bigger then the string '{1}'", firstString, secondString);
    else if (secondString->Length > firstString->Length)
        Console::WriteLine(L"The string '{1}' bigger then the string '{0}'", firstString, secondString);
    else
        Console::WriteLine(L"The string '{0}' equals the string '{1}'", firstString, secondString);
}
