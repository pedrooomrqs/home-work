#include <iostream>
#include <locale.h>

void main() 
{
	int P1, P2, P3, P4;
	setlocale(LC_ALL, "Portuguese");

	std::cout << "Choose P1 >> ";
	std::cin >> P1;
	std::cout << "Choose P2 >> ";
	std::cin >> P2;
	std::cout << "Choose P3 >> ";
	std::cin >> P3;
	std::cout << "Choose P4 >> ";
	std::cin >> P4;

	std::cout << "The average is " << (P1 + P2 + P3 + P4) / 4;
}