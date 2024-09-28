#include <iostream>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int P1, P2, P3;

	std::cout << "Choose a number for P1 >> ";
	std::cin >> P1;
	std::cout << "Choose a number for P2 >> ";
	std::cin >> P2;
	std::cout << "Choose a number for P3 >> ";
	std::cin >> P3;

	if (P1 == P2 || P1 == P3 || P2 == P3)
	{
		std::cout << "You can't enter same numbers!";
	}
	else if (P1 > P2 && P1 > P3)
	{
		std::cout << "P1 is the highest number.";
	}
	else if (P2 > P1 && P2 > P3)
	{
		std::cout << "P2 is the highest number.";
	}
	else if (P3 > P1 && P3 > P2)
	{
		std::cout << "P3 is the highest number.";
	}
}