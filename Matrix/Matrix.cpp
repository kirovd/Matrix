// Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>

using namespace std;
int modules(int iN,  int iTut) {
	int iQ = (iN / iTut);
	return iN - (iQ*iTut);			
}

char GetChar(int iGen, char cBase, int iRange) {
	return(cBase + modules(iGen, iRange));

}


int main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 2);


	char TUT[80];
	int j = 7;
	int k = 2;
	int l = 5;
	int m = 1;
	int n = 9;
	int o = 3;
	int p = 6;
	int q = 8;
	while (true) {
		int i = 0;
		while (i < 80) {
			if (TUT[i] != ' ') {
				TUT[i] = GetChar(j + i * i, 33, 30);
				if (((i*i + k) % 71) == 0) {
					SetConsoleTextAttribute(hConsole, 7);
				}
				else {
					SetConsoleTextAttribute(hConsole, 2);
				}
			}
			cout << TUT[i];
			++i;
			SetConsoleTextAttribute(hConsole, 2);
			SetConsoleTextAttribute(hConsole, 7);
		}
		j = (j + 31);
		k = (k + 17);
		l = (l + 47);
		m = (m + 67);
		n = (n + 55);
		o = (o + 12);
		p = (p + 97);
		q = (q + 22);
		TUT[modules(j, 80)] = '-';
		TUT[modules(k, 80)] = ' ';
		TUT[modules(l, 80)] = '-';
		TUT[modules(m, 80)] = ' ';
		TUT[modules(n, 80)] = '-';
		TUT[modules(o, 80)] = ' ';
		TUT[modules(p, 80)] = '-';
		TUT[modules(q, 80)] = ' ';
		Sleep(10);
	}
	return 0;
}
