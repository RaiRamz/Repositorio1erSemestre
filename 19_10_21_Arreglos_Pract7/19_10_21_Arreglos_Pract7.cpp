// 19_10_21_Arreglos_Pract7.cpp 
//zap504 Juan Pablo Ríos Ramírez
//Demostrar el funcionamiento de los arreglos

#include <iostream>
#include <string> //esta libreria incluye el getline 

int main()
{
	std::string titulo[5];
	int fecha[5];
	std::string autor[5];

	for (int i = 0; i < 5; i++)
	{
		//le pide al usuario que ingrese los datos para completar la base de datos
		std::cout << "Ponga el nombre del juego que quiere ingresar, el año de publicacion y el autor: " << std::endl;
		std::cout << "Titulo: ";
		std::getline(std::cin, titulo[i]);//getline se usa para poder leer espacios en blanco y que no explote el programa
		std::cout << "Fecha: ";
		std::cin >> fecha[i];
		std::cin.ignore();//cin.ignore() se usa para limpiar el buffer, pues el getline toma el enter como otro dato en blanco y esto causa problemas en el programa
		std::cout << "Autor: ";
		std::getline(std::cin, autor[i]);
	}

	for (int j = 0; j < 5; j++)
	{
		//imprimer los valores dados
		std::cout << "El juego que ingreso numero: " << j << " ,su titulo es " << titulo[j] << " ,se publico el año " << fecha[j] << " y el autor es: " << autor[j] << std::endl;
	}

	/*
	int variableint[10];
   //Asignacion de valors automatica
	for (int i = 0; i < 10; i++)
	{
		variableint[i] = 9;
	}
	//Impresion de valores
	for (int j = 0; j < 10; j++)
	{
		std::cout << "El valor es " << variableint[j] << "\nLa posicion que estas imprimiendo es: " << j << std::endl;
	}
	*/
}