#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Завдання Р-2");

    Console::Write(L"Input the first string: ");
    String^ str1 = Console::ReadLine();

    Console::Write(L"Input the first string: ");
    String^ str2 = Console::ReadLine();

    String^ str3 = str1 + str2;

    Console::WriteLine(str3);
}
