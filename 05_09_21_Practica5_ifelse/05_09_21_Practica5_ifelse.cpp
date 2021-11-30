// 05_09_21_Practica5_ifelse.cpp 
//Aquí se veran los distintos usos de el if-else
//Juan Pablo Ríos Ram+irez

#include <iostream>

int main()
{
    std::string nombre = "Juan";
    std::string nombre_in;
    int edad = 19;
    int edad_in;
    float estatura = 1.7;
    float estatura_in;
    double estaturaexacta = 1.75;
    double estaturaexacta_in;
    bool sexohombre = true;
    bool sexohombrein;

    std::cout << "Hola, por favor responder este cuestionario acerca de mi" << std::endl;
    std::cout << "¿Cual es mi primer nombre?" << std::endl;
    std::cin >> nombre_in;
    if (nombre == nombre_in)
    {
        std::cout << "Sip, ese es mi nombre." << std::endl;
        std::cout << "Bien!, ahora, cual es mi edad?" << std::endl;
        std::cin >> edad_in;
        if (edad == edad_in)
        {
            std::cout << "Sip, esa es mi edad." << std::endl;
            std::cout << "Vamos bien, ahora, cual es mi estatura con solo un decimal?" << std::endl;
            std::cin >> estatura_in;
            if (estatura == estatura_in)
            {
                std::cout << "Sip, eso mido." << std::endl;
                std::cout << "Vas super bien, ahora, cuanto mido exactamente?" << std::endl;
                std::cin >> estaturaexacta_in;
                if (estaturaexacta == estaturaexacta_in)
                {
                    std::cout << "Sip, eso mido." << std::endl;
                    std::cout << "Wow, estas en racha, siguente: Es verdad que soy hombre?" << std::endl;
                    std::cin >> sexohombrein;
                    if ( sexohombre==sexohombrein )
                    {
                        std::cout << "sip, es correcto." << std::endl;
                        std::cout << "Felicidades, acabaste el quizz" << std::endl;
                    }
                    else
                    {
                        std::cout << "Nop." << std::endl;
                    }
                }
                else
                {
                    std::cout << "Nop, eso no mido." << std::endl;
                }

            }
            else
            {
                std::cout << "woops, eso no mido" << std::endl;
            }
        }
        else
        {
            std::cout << "Nop, esa no es mi edad." << std::endl;
        }
    }
    else
    {
        std::cout << "woops, ese no es mi nombre." << std::endl;
    }
    
}

