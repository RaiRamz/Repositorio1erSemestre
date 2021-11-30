// 26_10_21_clasepractica9.cpp 
// Juan Pablo RÃ­os
//Veremos como hacer matrices y rellenarlas con datos generados al azar.
//Aqui se vera el uso de los punteros para hacer matrices (arrays o matrizs bidimensionales) dinámicos.

#include <iostream>
#include <ctime>

int main()
{
	int n, m;
	std::cin >> n >> m;
	//una matriz bidimensional que usa memoria dinámica está formada por dos partes: primero, un arreglo de punteros y segundo, una serie de arreglos de elemento, por lo tanto, hay que declararlo como un puntero hacia un puntero. 
	//new se usa para crear una nueva variable que se mantendrá en un espacio de memoria persistente 
	int** matriz = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matriz[i] = new int[m];//por cada valor insertado en n, se creara un nuevo arreglo de m, asi creando nuestra matriz bidimensional
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << "Por favor escriba el valor que se almacenara en la posicion: " << "[" << i << "][" << j << "]: " << matriz[i][j] << std::endl;
			std::cin >> matriz[i][j];
			std::cout << "Valor " << "[" << i << "][" << j << "]: " << matriz[i][j] << "    ";
		}
		std::cout << std::endl;
	}
	//tenemos que usar el delete cada que usamos punteros.
	for (int i = 0; i < n; i++)
	{
		delete[]matriz[i];
	}
	delete[]matriz;

	int matriz1[2][3];
	int filas = (sizeof(matriz1) / sizeof(matriz1[0]));
	int columnas = (sizeof(matriz1[0]) / sizeof(matriz1[0][0]));

	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			std::cout << "por favor rellene los datos de la matriz 2*3, luego se le mostrara en que posicion fue asignado." << std::endl;
			std::cin >> matriz1[i][j];
			std::cout << "El numero ingresado fue guardado en el espacio: " << "[" << i << "][" << j << "] " << "= " << matriz1[i][j] << srd::endl;
		}
		std::cout << std::endl;
	}
	/*
	int edad = 20;
	int* apuntador_edad = &edad;

	std::cout << "El apuntador sin asterisco imprime: " << apuntador_edad << " Direccion de memoria apuntada." << std::endl;
	std::cout << "El apuntador con asterisco imprime: " << *apuntador_edad << " El valor de la direccion apuntada apuntada." << std::endl;
	std::cout << "El apuntador con Ampersand imprime: " << &apuntador_edad << " Direccion de memoria propia." << std::endl;

	//*extra* rellenar de manera automatica las posiciones de la matriz
	srand(time(NULL));
	int n, m;
	std::cin >> n >> m;
	int** arreglo = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arreglo[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arreglo[i][j] = rand() % 100;
			std::cout << "Valor " << "[" << i << "][" << j << "]: " << arreglo[i][j] << "    ";
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < n; i++)
	{
		delete[]arreglo[i];
	}
	delete[]arreglo;
	*/
}

