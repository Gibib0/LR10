#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    const double eta = 0.0018;
    const double deltaP = 0.02;
    const double l = 2;

    Console::Write(L"Enter number of radius: ");
    int n = Convert::ToDouble(Console::ReadLine());

    array<double>^ R = gcnew array<double>(n);
    for (int i = 0; i < n; i++) {
        Console::Write(L"Enter radius {0} (m): ", i + 1);
        R[i] = Convert::ToDouble(Console::ReadLine());

        if (R[i] <= 0) {
            Console::WriteLine("Radius must be greater than 0.");
            i--;
        }
    }

    array<double>^ V = gcnew array<double>(n);
    for (int i = 0; i < n; i++) {
        V[i] = (Math::PI * deltaP * Math::Pow(R[i], 4)) / (8 * eta * l);
    }

    Console::WriteLine();

    Console::Write(" | Radius (m) |");
    Console::Write(" Volume V (m^3/s) |");
    Console::WriteLine();

    for (int i = 0; i < n; i++) {
        Console::Write(" | {0,7} |", R[i]);
        Console::Write(" {0,7:F2} |", V[i]);
        Console::WriteLine();
    }
}
