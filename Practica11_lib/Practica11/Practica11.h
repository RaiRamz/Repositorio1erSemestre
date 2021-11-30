//creacion de matrices dinamicas
#pragma once
#include <iostream>
namespace Practica11
{
	class relleno
	{
	public:
		static int filas, col;
		static int** matriz;
	};
	void matrizzz() 
	{
		std::cout << "Hola, vamos a hacer una matriz, ingresa de cuantas columnas la quieres" << std::endl;
		std::cin >> relleno::filas;
		std::cout << "Ahora ingresa de cuantas columnas" << std::endl;
		std::cin >> relleno::col;
		relleno::matriz = new int* [relleno::filas];
		for (int i = 0; i < relleno::filas; i++)
		{
			relleno::matriz[i] = new int [relleno::col];
		}
	}
}