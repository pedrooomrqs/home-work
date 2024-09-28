#include <iostream>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	float Grade;

	std::cout << "What grade did you got? >> ";
	std::cin >> Grade;

	if (Grade>20 || Grade<0)
	{
		std::cout << "ERROR, YOU CAN ONLY PUT GRADES BETWEEN 0 AND 20!";
	}
	else if (Grade >= 9.5)
	{
		std::cout << "You passed, congratulations!";
	}
	else if (Grade < 9.5)
	{
		std::cout << "You failed.";
	}
}