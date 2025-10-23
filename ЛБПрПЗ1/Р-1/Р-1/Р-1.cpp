#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Завдання Р-1");

    Console::Write(L"Input the string: ");
    String^ userString = Console::ReadLine();
	String^ resultString = "begin" + userString + "end";

    int len = resultString->Length;

    Console::WriteLine(L"The length of string '{0}' is {1}", resultString, len);
}
