#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine("Enter number of matrixes for multiplying: ");
    Console::Write("Number of rows of matrix A: ");
    int n = int::Parse(Console::ReadLine());

    Console::Write("Number of columns of matrix A and rows of matrix B: ");
    int m = int::Parse(Console::ReadLine());

    Console::Write("Number of columns of matrix B: ");
    int k = int::Parse(Console::ReadLine());

    array<int, 2>^ A = gcnew array<int, 2>(n, m);
    array<int, 2>^ B = gcnew array<int, 2>(m, k);
    array<int, 2>^ C = gcnew array<int, 2>(n, k);

    Console::WriteLine("\nEnter matrix A elements: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            Console::Write("A[{0},{1}] = ", i + 1, j + 1);
            A[i, j] = int::Parse(Console::ReadLine());
        }
    }

    Console::WriteLine("\nEnter matrix B elements: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            Console::Write("B[{0},{1}] = ", i + 1, j + 1);
            B[i, j] = int::Parse(Console::ReadLine());
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            C[i, j] = 0;
            for (int l = 0; l < m; l++) {
                C[i, j] += A[i, l] * B[l, j];
            }
        }
    }

    Console::WriteLine("\nmatrix A:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            Console::Write("{0} ", A[i, j]);
        }
        Console::WriteLine();
    }

    Console::WriteLine("\nmatrix B:");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            Console::Write("{0} ", B[i, j]);
        }
        Console::WriteLine();
    }

    Console::WriteLine("\nResut matrix C (A * B):");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            Console::Write("{0} ", C[i, j]);
        }
        Console::WriteLine();
    }
}
