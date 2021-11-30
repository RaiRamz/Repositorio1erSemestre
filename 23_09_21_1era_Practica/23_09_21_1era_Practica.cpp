// 23_09_21_1era_Practica.cpp 
//Juan Pablo Ríos Ramírez

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    bool mi_primer_booleano;
    int mi_primer_entero;
    float mi_primer_flotante;
    double mi_primer_doble;
    long double mi_primer_doble_largo;
    char mi_primer_caracter[6];
    long long int mi_primer_long_long_int;
    string mi_primer_string;
    int num;
    
    cout << "Hello World!" << endl;

    //Booleano
    cout << "Por favor ingresa un valor booleano" << endl;
    cin >> mi_primer_booleano;
    cout << mi_primer_booleano << endl;

    //Entero
    cout << "Por favor ingresa un numero." << endl;
    cin >> mi_primer_entero;
    cout << "Escribiste: " << mi_primer_entero << endl;

    //Long long int
    cout << "Por favor escribe un numero muy grande." << endl;
    cin >> mi_primer_long_long_int;
    cout << "Escribiste: " << mi_primer_long_long_int << endl;

    //Flotante
    cout << "Por favor escribe un valor con decimales." << endl;
    cin >> mi_primer_flotante;
    cout << "Escribiste: " << mi_primer_flotante << endl;

    //Double
    cout << "Por favor escribe un valor con mas decimales." << endl;
    cin >> mi_primer_doble;
    cout << "Escribiste: " << mi_primer_doble << endl;

    //Long double
    cout << "Por favor escribe un valor con muchos mas decimales." << endl;
    cin >> mi_primer_doble_largo;
    cout << "Escribiste: " << mi_primer_doble_largo << endl;

    //Character
    cout << "Por favor escribe maximo 6 caracteres." << endl;
    cin >> mi_primer_caracter;
    cout << "Escribiste: " << mi_primer_caracter << endl;

    //String
    cout << "Por favor escribe tu nombre." << endl;
    cin >> mi_primer_string;
    cout << "Tu nombre es: " << mi_primer_string << endl;
    
    //Scanf y Printf
    printf("Escriba un entero:");
    scanf_s("%d", &num);
    printf("\nEl entero que pusiste es: %d", num);
   
}
