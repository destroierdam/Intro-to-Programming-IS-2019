#include "pch.h"
#include <iostream>

int main()
{ 
	int people;
	int apples;
	std::cin >> apples >> people;
	// The number of apples that each person gets
	std::cout << apples / people << std::endl;
	
	// The number of apples that are left in the basket
	std::cout << apples % people << std::endl;
	
	return 0;
}