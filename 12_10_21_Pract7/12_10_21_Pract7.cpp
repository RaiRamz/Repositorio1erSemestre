// 12_10_21_Pract7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    bool respuesta;

    std::cout << "Bienvenidx al Adivina Quien de Hora de Aventua." << std::endl;
    std::cout << "Selecciona un personaje de la siguiente lista y el programa intentara adivinarlo.\n" << std::endl;
    std::cout << "Realeza:\nRey Helado.            Dulce Principe.          Limon agrio." << std::endl;
    std::cout << "Dulce Princesa.        Princesa Grumosa.        Princesa Hotdog." << std::endl;
    std::cout << "Princesa slime.        Princesa flama.\n" << std::endl;
    std::cout << "Humanos:\nFinn.        Fionna.\n" << std::endl;
    std::cout << "Animales:\nJake.           Arcoiris.          Cake." << std::endl;
    std::cout << "Gunther.        Tronquitos.        Sr. Cerdo.\n" << std::endl;
    std::cout << "No humano:\nMarceline.        BMO.           Marshall lee." << std::endl;
    std::cout << "Lich.             Prismo.        Mentita.        Ricardio.\n" << std::endl;

    std::cout << "Ingresa 1 cuando estes listo para continuar.\n";
    std::cin >> respuesta;

    if (respuesta == 1)
    {
        std::cout << "¿Tu personaje es un humano?\n";
        std::cout << "1=Si\n0=No\n";
        std::cin >> respuesta;

        if (respuesta == 1)
        {
            std::cout << "¿Tu personaje es mujer?\n";
            std::cout << "1=Si\n0=No\n";
            std::cin >> respuesta;


            if (respuesta == 1)
            {
                std::cout << "Tu personaje es FIONNA." << std::endl;
                return 0;
            }

            else
            {
                std::cout << "Tu personaje es FINN." << std::endl;
                return 0;
            }

        }

        else
        {
            std::cout << "¿Tu personaje es parte de la realeza?\n";
            std::cout << "1=Si\n0=No\n";
            std::cin >> respuesta;

            if (respuesta == 1)
            {
                std::cout << "¿Tu personaje es mujer?\n";
                std::cout << "1=Si\n0=No\n";
                std::cin >> respuesta;

                if (respuesta == 1)
                {
                    std::cout << "¿Tu personaje esta hecha de chicle?\n";
                    std::cout << "1=Si\n0=No\n";
                    std::cin >> respuesta;

                    if (respuesta == 1)
                    {
                        std::cout << "Tu personaje es DULCE PRINCESA." << std::endl;
                        return 0;
                    }

                    else
                    {
                        std::cout << "¿Tu personaje es morada?\n";
                        std::cout << "1=Si\n0=No\n";
                        std::cin >> respuesta;

                        if (respuesta == 1)
                        {
                            std::cout << "Tu personaje es PRINCESA GRUMOSA." << std::endl;
                            return 0;
                        }
                        else
                        {
                            std::cout << "¿Tu personaje es verde?\n";
                            std::cout << "1=Si\n0=No\n";
                            std::cin >> respuesta;

                            if (respuesta == 1)
                            {
                                std::cout << "Tu personaje es PRINCESA SLIME." << std::endl;
                                return 0;
                            }

                            else
                            {
                                std::cout << "¿Tu personaje es de fuego?\n";
                                std::cout << "1=Si\n0=No\n";
                                std::cin >> respuesta;

                                if (respuesta == 1)
                                {
                                    std::cout << "Tu personaje es PRINCESA FLAMA." << std::endl;
                                    return 0;
                                }

                                else
                                {
                                    std::cout << "Tu personaje es PRINCESA HOT DOG." << std::endl;
                                    return 0;
                                }

                            }

                        }

                    }

                }

                else
                {
                    std::cout << "¿Tu personaje es de chicle?\n";
                    std::cout << "1=Si\n0=No\n";
                    std::cin >> respuesta;

                    if (respuesta == 1)
                    {
                        std::cout << "Tu personaje es DULCE PRINCIPE." << std::endl;
                        return 0;
                    }

                    else
                    {
                        std::cout << "¿Tu personaje es de hielo?\n";
                        std::cout << "1=Si\n0=No\n";
                        std::cin >> respuesta;

                        if (respuesta == 1)
                        {
                            std::cout << "Tu personaje es REY HELADO." << std::endl;
                            return 0;
                        }

                        else
                        {
                            std::cout << "Tu personaje es LIMON AGRIO." << std::endl;
                            return 0;
                        }

                    }

                }

            }

            else
            {
                std::cout << "¿Tu personaje es un animal?\n";
                std::cout << "1=Si\n0=No\n";
                std::cin >> respuesta;

                if (respuesta == 1)
                {
                    std::cout << "¿Tu personaje es un perro?\n";
                    std::cout << "1=Si\n0=No\n";
                    std::cin >> respuesta;

                    if (respuesta == 1)
                    {
                        std::cout << "¿Tu personaje es hembra?\n";
                        std::cout << "1=Si\n0=No\n";
                        std::cin >> respuesta;

                        if (respuesta == 1)
                        {
                            std::cout << "Tu personaje es CAKE." << std::endl;
                            return 0;
                        }

                        else
                        {
                            std::cout << "Tu personaje es JAKE." << std::endl;
                            return 0;
                        }

                    }

                    else
                    {
                        std::cout << "¿Tu personaje habla coreano?\n";
                        std::cout << "1=Si\n0=No\n";
                        std::cin >> respuesta;

                        if (respuesta == 1)
                        {
                            std::cout << "Tu personaje es ARCOIRIS." << std::endl;
                            return 0;
                        }

                        else
                        {
                            std::cout << "¿Tu personaje hace pays de manzanas?\n";
                            std::cout << "1=Si\n0=No\n";
                            std::cin >> respuesta;

                            if (respuesta == 1)
                            {
                                std::cout << "Tu personaje es TRONQUITOS." << std::endl;
                                return 0;
                            }

                            else
                            {
                                std::cout << "¿Tu personaje es un cerdo?\n";
                                std::cout << "1=Si\n0=No\n";
                                std::cin >> respuesta;

                                if (respuesta == 1)
                                {
                                    std::cout << "Tu personaje es SR CERDO." << std::endl;
                                    return 0;
                                }

                                else
                                {
                                    std::cout << "Tu personaje es GUNTHER." << std::endl;
                                    return 0;
                                }

                            }

                        }

                    }

                }

                else
                {
                    std::cout << "¿Tu personaje es malvado?\n";
                    std::cout << "1=Si\n0=No\n";
                    std::cin >> respuesta;

                    if (respuesta == 1)
                    {
                        std::cout << "¿Tu personaje es un corazon?\n";
                        std::cout << "1=Si\n0=No\n";
                        std::cin >> respuesta;

                        if (respuesta == 1)
                        {
                            std::cout << "Tu personaje es RICARDIO." << std::endl;
                            return 0;
                        }

                        else
                        {
                            std::cout << "¿Tu personaje es un mayordomo?\n";
                            std::cout << "1=Si\n0=No\n";
                            std::cin >> respuesta;

                            if (respuesta == 1)
                            {
                                std::cout << "Tu personaje es MENTITA." << std::endl;
                                return 0;
                            }

                            else
                            {
                                std::cout << "Tu personaje es EL LICH." << std::endl;
                                return 0;
                            }

                        }

                    }

                    else
                    {
                        std::cout << "¿Tu personaje es un vampiro?\n";
                        std::cout << "1=Si\n0=No\n";
                        std::cin >> respuesta;

                        if (respuesta == 1)
                        {
                            std::cout << "¿Tu personaje es mujer?\n";
                            std::cout << "1=Si\n0=No\n";
                            std::cin >> respuesta;

                            if (respuesta == 1)
                            {
                                std::cout << "Tu personaje es MARCELINE." << std::endl;
                                return 0;
                            }

                            else
                            {
                                std::cout << "Tu personaje es MARSHALL LEE." << std::endl;
                                return 0;
                            }

                        }

                        else
                        {
                            std::cout << "Tu personaje es BMO." << std::endl;
                            return 0;
                        }

                    }

                }

            }

        }


    }
}