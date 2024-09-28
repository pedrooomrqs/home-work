#include <iostream>
#include <locale.h>

void main () 
{
	int KMB, KMA, LWasted;
	setlocale(LC_ALL, "Portuguese");

	std::cout << "How much KM's did you have before? >> ";
	std::cin >> KMB;
	std::cout << "How much KM's do you have now? >> ";
	std::cin >> KMA;
	std::cout << "How much Liters did you waste? >> ";
	std::cin >> LWasted;

	std::cout << "You waste " << LWasted*100 / (KMA-KMB) << " Liters per 100 KMs";
}