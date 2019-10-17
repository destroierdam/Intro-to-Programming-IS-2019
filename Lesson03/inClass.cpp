// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int month = 2;

	bool isLeap = true;
	
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << 31 << endl;	
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "30" << endl;
		break;
	case 2:
		/*
		if (isLeap) {
			cout << 29 << endl;
		}
		else {
			cout << 28 << endl;
		}
		*/
		cout << 28 + isLeap << endl;
		
		break;
	default:
		cout << "Not a month" << endl;
	}
} 