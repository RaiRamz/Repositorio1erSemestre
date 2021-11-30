// 29_09_21_Practica4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    
    int mi_primer_entero;
    float mi_primer_flotante;
    double mi_primer_doble;
    char mi_primer_caracter[6];
    string mi_primer_string;
    int num;
    char name[100];
    float decimal;
    //Entero
    cout << "Por favor ingresa un numero." << endl;
    cin >> mi_primer_entero;
    cout << "Escribiste: " << mi_primer_entero << endl;
    //Flotante
    cout << "Por favor escribe un valor con decimales." << endl;
    cin >> mi_primer_flotante;
    cout << "Escribiste: " << mi_primer_flotante << endl;
    //Double
    cout << "Por favor escribe un valor con mas decimales." << endl;
    cin >> mi_primer_doble;
    cout << "Escribiste: " << mi_primer_doble << endl;
    //Character
    cout << "Por favor escribe maximo 6 caracteres." << endl;
    cin >> mi_primer_caracter;
    cout << "Escribiste: " << mi_primer_caracter << endl;
    //String
    cout << "Por favor escribe tu nombre." << endl;
    cin >> mi_primer_string;
    cout << "Tu nombre es: " << mi_primer_string << endl;
    //Scanf y Printf
    //Int
    printf("Escriba un entero:");
    scanf_s("%d", &num);
    printf("\nEl entero que pusiste es: %d", num);
    //Char
    printf("\nEscribe tu nombre: ");
    scanf_s("%100s", name, 100); 
    printf("\nTu nombre es: %s", name);
    //Float
    printf("\nEsribe un valor con decimal: ");
    scanf_s("%f", &decimal);
    printf("\nEscribiste: %f", decimal);


}


