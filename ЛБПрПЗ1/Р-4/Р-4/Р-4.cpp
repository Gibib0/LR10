#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Завдання Р-4");

    Console::Write(L"Input the string: ");
    String^ userString = Console::ReadLine();

    array<wchar_t>^ symbols = userString->ToCharArray();

    Array::Reverse(symbols);

    String^ reversedString = gcnew String(symbols);

    Console::WriteLine(L"Reversed string: {0}", reversedString);    
}
