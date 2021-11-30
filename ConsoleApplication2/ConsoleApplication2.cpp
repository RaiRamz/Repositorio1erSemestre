// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <cstdio>

int main()
{
    char name[100];
    printf("Write your name: ");
    scanf_s("%50s", name, 100);
    printf("\nYou wrote: %s", name);

}
