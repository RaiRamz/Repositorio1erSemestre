


#include <iostream>

int main()
{
	int* puntero=NULL;
	int num;
	puntero = &num;
	std::cin >> *puntero;
	std::cout << "\n" << num;
}

