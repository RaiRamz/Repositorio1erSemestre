
// 06_10_21_Practica6_Pokemon.cpp 
// Juego de Pokémon

#include <iostream>

int main()
{
	int numpoke;
	int attckdef;
	bool muertoJc = false;
	int vidaJC = 10;
	int vidapj = 10;

	std::cout << "John Cena te desafia a una batalla pokemon! Que Pokemon quieres usar?" << std::endl;
	std::cout << "Pulsa la opción y dale enter para confirmar.\n1.-Pikachu\n2.-Charmander\n3.-Bulbasaur\n4.-Squirtle" << std::endl;
	std::cin >> numpoke;
	switch (numpoke)
	{
	case 1:
		std::cout << "Escogiste a Pikachu" << std::endl;
		std::cout << "John Cena escoge un Cubone\nEmpieza la batalla!" << std::endl;
		while (muertoJc == false)
		{
			std::cout << "Que escoges?:\n1.-Atacar\n2.-Defender" << std::endl;
			std::cin >> attckdef;
			switch (attckdef)
			{
			case 1:
				std::cout << "Atacas, el pokemon de John pierde 1 de vida" << std::endl;
				std::cout << "John Cena ataca, es super efectivo, pierdes dos de vida" << std::endl;
				vidaJC = vidaJC - 1;
				vidapj = vidapj - 2;
				if (vidapj == 4)
				{
					std::cout << "Tomas una pocion de vida" << std::endl;
					vidapj = +4;
				}
				if (vidaJC == 0)
				{
					std::cout << "Felicidades, ganaste!" << std::endl;
					muertoJc = true;
				}
				break;
			case 2:
				std::cout << "John ataca, pero defendiste, no pierdes vida" << std::endl;
			default:
				std::cout << "Escoge una opcion valida" << std::endl;
				break;
			}
		}
		break;
	case 2:
		std::cout << "Escogiste a Charmander" << std::endl;
		std::cout << "John escogio a Squirtle" << std::endl;
		while (muertoJc == false)
		{
			std::cout << "Que escoges?:\n1.-Atacar\n2.-Defender" << std::endl;
			std::cin >> attckdef;
			switch (attckdef)
			{
			case 1:
				std::cout << "Atacas, el pokemon de John pierde 1 de vida" << std::endl;
				std::cout << "John Cena ataca, es super efectivo, pierdes dos de vida" << std::endl;
				vidaJC = vidaJC - 1;
				vidapj = vidapj - 2;
				if (vidapj == 4)
				{
					std::cout << "Tomas una pocion de vida" << std::endl;
					vidapj = +4;
				}
				if (vidaJC == 0)
				{
					std::cout << "Felicidades, ganaste!" << std::endl;
					muertoJc = true;
				}
				break;
			case 2:
				std::cout << "John ataca, pero defendiste, no pierdes vida" << std::endl;
			default:
				std::cout << "Escoge una opcion valida" << std::endl;
				break;
			}
		}
		break;
	case 3:
		std::cout << "Escogiste a Bulbasaur" << std::endl;
		std::cout << "John escogio a Charmander" << std::endl;
		while (muertoJc == false)
		{
			std::cout << "Que escoges?:\n1.-Atacar\n2.-Defender" << std::endl;
			std::cin >> attckdef;
			switch (attckdef)
			{
			case 1:
				std::cout << "Atacas, el pokemon de John pierde 1 de vida" << std::endl;
				std::cout << "John Cena ataca, es super efectivo, pierdes dos de vida" << std::endl;
				vidaJC = vidaJC - 1;
				vidapj = vidapj - 2;
				if (vidapj == 4)
				{
					std::cout << "Tomas una pocion de vida" << std::endl;
					vidapj = +4;
				}
				if (vidaJC == 0)
				{
					std::cout << "Felicidades, ganaste!" << std::endl;
					muertoJc = true;
				}
				break;
			case 2:
				std::cout << "John ataca, pero defendiste, no pierdes vida" << std::endl;
			default:
				std::cout << "Escoge una opcion valida" << std::endl;
				break;
			}
		}
		break;
	case 4:
		std::cout << "Escogiste a Squirtle" << std::endl;
		std::cout << "John escogio a Bulbasaur" << std::endl;
		while (muertoJc == false)
		{
			std::cout << "Que escoges?:\n1.-Atacar\n2.-Defender" << std::endl;
			std::cin >> attckdef;
			switch (attckdef)
			{
			case 1:
				std::cout << "Atacas, el pokemon de John pierde 1 de vida" << std::endl;
				std::cout << "John Cena ataca, es super efectivo, pierdes dos de vida" << std::endl;
				vidaJC = vidaJC - 1;
				vidapj = vidapj - 2;
				if (vidapj == 4)
				{
					std::cout << "Tomas una pocion de vida" << std::endl;
					vidapj = +4;
				}
				if (vidaJC == 0)
				{
					std::cout << "Felicidades, ganaste!" << std::endl;
					muertoJc = true;
				}
				break;
			case 2:
				std::cout << "John ataca, pero defendiste, no pierdes vida" << std::endl;
			default:
				std::cout << "Escoge una opcion valida" << std::endl;
				break;
			}
		}
		break;
	default:
		std::cout << "Escoge un Pokemon valido" << std::endl;
		break;
		}
}