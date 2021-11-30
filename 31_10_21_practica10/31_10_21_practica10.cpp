// 31_10_21_practica10.cpp 
// Juan Pablo Ríos Ramírez
// Realizar un Battle Royale en Consola puedes tomar a tus compañeros como parte del juego.
#include <iostream>
#include <ctime>

struct Persona
{
    std::string nombre[19] = { "Dis", "Alex", "Angel_J", "Dylan", "Rich", "Oscar_F", "Yuss", "Ferchus", "Kuvassi", "Angel_A", "Shasho", "Isra", "Pato", "Chilo", "Jp", "Eric", "Rodrigo", "Abraham", "Kevin" };
    int nivel_barrio;
    int peliculas_barbie_vistas;
    int animes_vistos;
    int cantidad_tazos;
}jugador[19];

void main()
{
    srand(time(NULL));
    Persona jugador[19];
    int powerup = 10;
    int mayor, mayor1, mayor2, mayor3;
    for (int i = 0; i < 19; i++)
    {
        jugador[i].animes_vistos = rand() % 100 + 1;
        jugador[i].cantidad_tazos = rand() % 100 + 1;
        jugador[i].nivel_barrio = rand() % 100 + 1;
        jugador[i].peliculas_barbie_vistas = rand() % 100 + 1;
        /*
        std::cout << "El jugador: " << jugador[i].nombre[i] << " tiene: " << jugador[i].animes_vistos << " animes vistos, wow que otaku!\n";
        std::cout << "El jugador: " << jugador[i].nombre[i] << " tiene: " << jugador[i].cantidad_tazos << " tazos, wow que envidia!\n";
        std::cout << "El jugador: " << jugador[i].nombre[i] << " tiene: " << jugador[i].nivel_barrio << " nivel de barrio, toma mi cartera y no me hagas danio pls.\n";
        std::cout << "El jugador: " << jugador[i].nombre[i] << " tiene: " << jugador[i].peliculas_barbie_vistas << " peliculas de barbie vistas, hay que hacer un maraton!\n";
        */
    }
    jugador[rand() % 19].animes_vistos += powerup;
    jugador[rand() % 19].cantidad_tazos += powerup;
    jugador[rand() % 19].nivel_barrio += powerup;
    jugador[rand() % 19].peliculas_barbie_vistas += powerup;
    
    for (int i = 0; i < 19; i++)
    {
        /*
        std::cout << "El jugador: " << jugador[i].nombre[i] << " tiene: " << jugador[i].animes_vistos << " animes vistos, wow que otaku!\n";
        std::cout << "El jugador: " << jugador[i].nombre[i] << " tiene: " << jugador[i].cantidad_tazos << " tazos, wow que envidia!\n";
        std::cout << "El jugador: " << jugador[i].nombre[i] << " tiene: " << jugador[i].nivel_barrio << " nivel de barrio, toma mi cartera y no me hagas danio pls.\n";
        std::cout << "El jugador: " << jugador[i].nombre[i] << " tiene: " << jugador[i].peliculas_barbie_vistas << " peliculas de barbie vistas, hay que hacer un maraton!\n";
        */
        if (i == 0)
        {
            mayor = jugador[i].animes_vistos;
            mayor1 = jugador[i].cantidad_tazos;
            mayor2 = jugador[i].nivel_barrio;
            mayor3 = jugador[i].peliculas_barbie_vistas;
        }
        else
        {
            if (jugador[i].animes_vistos > mayor)mayor = jugador[i].animes_vistos;
            if (jugador[i].cantidad_tazos > mayor1)mayor1 = jugador[i].cantidad_tazos;
            if (jugador[i].nivel_barrio > mayor2)mayor2 = jugador[i].nivel_barrio;
            if (jugador[i].peliculas_barbie_vistas > mayor3)mayor3 = jugador[i].peliculas_barbie_vistas;
        }
    }

    for (int i = 0; i < 19; i++)
    {
        if (mayor == jugador[i].animes_vistos)
        {
            std::cout << "El ganador en animes vistos es: " << jugador[i].nombre[i] << std::endl;
        }
        if (mayor1 == jugador[i].cantidad_tazos)
        {
            std::cout << "El ganador en cantidad de tazos es: " << jugador[i].nombre[i] << std::endl;
        }
        if (mayor2 == jugador[i].nivel_barrio)
        {
            std::cout << "El ganador en nivel de barrio es: " << jugador[i].nombre[i] << std::endl;
        }
        if (mayor3 == jugador[i].peliculas_barbie_vistas)
        {
            std::cout << "El ganador en peliculas de barbie vistas es: " << jugador[i].nombre[i] << std::endl;
        }
    }
    
}
