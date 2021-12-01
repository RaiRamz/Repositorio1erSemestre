// 30_11_21_Proyecto1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Proyecto 1, juego en consola del efecto mariposa.
// Juan Pablo Rios Ramirez

#include <iostream>

int main()
{
	bool continuar = true;
	bool yesorno;

	while (continuar == true)
	{
		std::cout << "Hola, querido amigo, hoy inicia tu aventura por el mundo magico de Turania" << std::endl;
		std::cout << "Cual sera tu primera accion?\nResponde 1 para desayunar, responde 0 para salir de casa." << std::endl;
		std::cin >> yesorno;
		if (yesorno == true)
		{
			std::cout << "Escogiste desayunar." << std::endl;
			std::cout << "Te haces unos huevitos y tomas leche" << std::endl;
			std::cout << "Que quieres hacer?\nResponde 1 para darte un banio, responde 0 para salir de tu casa" << std::endl;
			std::cin >> yesorno;
			if (yesorno==true)
			{
				std::cout << "Escogiste date un banio" << std::endl;
				std::cout << "Quieres ponerte tus chanclas para baniarte?\n1=SI 0=No" << std::endl;
				std::cin >> yesorno;
				if (yesorno==true)
				{
					std::cout << "Escogiste ponerte tus chanclitas" << std::endl;
					std::cout << "Te banias bien a gusto, sales, te secas y te vistes, ya estás listo para la aventura" << std::endl;
					std::cout << "De la nada te da flojera salir de tu casa, que escogeras?\nResponde 1 par hacerle caso a la flojera, responde 0 para salir de casa" << std::endl;
					std::cin >> yesorno;
					if (yesorno==true)
					{
						std::cout << "Escogiste quedarte en casita y dormir" << std::endl;
						std::cout << "Llega tu esposa y te empieza a gritar por flojo, que haces?" << std::endl;
						std::cout << "Responde 1 para llorar en una esquina, responde 0 para discutir de vuelta" << std::endl;
						std::cin >> yesorno;
						if (yesorno==true)
						{
							std::cout << "Lloras en una esquina toda la noche." << std::endl;
							std::cout << "Final: aparte de flojo, mandilon" << std::endl;
							std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
							std::cin >> continuar;
						}
					}
					else
					{
						std::cout << "Decidiste salir de tu casa." << std::endl;
						std::cout << "Sales de tu casa y ves que tu mama vino de visita, que haces?" << std::endl;
						std::cout << "Responde 1 para recibirla en tu casa, responde 0 para decirle que ya te ibas que mejor mañana." << std::endl;
						std::cin >> yesorno;
						if (yesorno==true)
						{
							std::cout << "La recibes en tu casa." << std::endl;
							std::cout << "Ves que saca un postre hecho en casa, haces cafe y pasas una linda velada con ella." << std::endl;
							std::cout << "Final: Te amo, Ma" << std::endl;
							std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
							std::cin >> continuar;
						}
						else
						{
							std::cout << "Le dices que ibas de salida y que regrese maniana" << std::endl;
							std::cout << "Te dice que nel y que la recibas, que esas no son formas de tratar a tu madre. La recibes ahuevo y toda la noche se la pasa reganiandote" << std::endl;
							std::cout << "Final: No seas grosero con tu mama" << std::endl;
							std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
							std::cin >> continuar;
						}
					}
				}
				else
				{
					std::cout << "No te pones tus chanclitas para baniarte." << std::endl;
					std::cout << "Te resbalas y te partes la cabeza, mueres desangrado." << std::endl;
					std::cout << "Final: Que te costaba ponerte tus chanclitas?" << std::endl;
					std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
					std::cin >> continuar;
				}
			}
			else
			{
				std::cout << "Decidiste salir de tu casita." << std::endl;
				std::cout << "Sales y ves que hay un borracho haciendo pipi en la fachada de tu casa, que haces?" << std::endl;
				std::cout << "Responde 1 para confrontarlo, responde 0 para ignorarlo y seguir" << std::endl;
				std::cin >> yesorno;
				if (yesorno==true)
				{
					std::cout << "Decidiste confrontarlo." << std::endl;
					std::cout << "Resulta ser el jefe de caballeria del reino, te arrestan y te llevan a la carcel" << std::endl;
					std::cout << "Final: espero no se te caiga el jabon bro" << std::endl;
					std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
					std::cin >> continuar;
				}
				else
				{
					std::cout << "Decidiste ignorarlo." << std::endl;
					std::cout << "Sigues tu camino y ves un bar de pasada, que haces?" << std::endl;
					std::cout << "Responde 1 para entrar, responde 0 para seguir" << std::endl;
					std::cin >> yesorno;
					if (yesorno==true)
					{
						std::cout << "Decidiste entrar." << std::endl;
						std::cout << "Ves a tu tio ligando con tu primo, que haces?" << std::endl;
						std::cout << "Responde 1 para ignorarlo, responde 0 para confrontarlo" << std::endl;
						std::cin >> yesorno;
						if (yesorno==true)
						{
							std::cout << "Decides ignorarlo." << std::endl;
							std::cout << "Te tomas unas cervezas y para cuando te das cuenta ya es de noche, que haces?" << std::endl;
							std::cout << "Responde 1 para irte a tu casa, responde 0 para seguir tomando" << std::endl;
							std::cin >> yesorno;
							if (yesorno==true)
							{
								std::cout << "Te vas a tu casita medio pedo." << std::endl;
								std::cout << "Llegas a tu casita y te recibe tu esposa con la cena, cenas y se van a mimir." << std::endl;
								std::cout << "Final: Que bonito es lo bonito" << std::endl;
								std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
								std::cin >> continuar;
							}
							else
							{
								std::cout << "Te quedas a tomar." << std::endl;
								std::cout << "Te pones una pedota y te duermes ahi, amaneces todo miado y sin cartera." << std::endl;
								std::cout << "Final: Eso te pasa por borracho" << std::endl;
								std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
								std::cin >> continuar;
							}
						}
						else
						{
							std::cout << "Decides confrontarlo." << std::endl;
							std::cout << "Te ofrecen un trio, aceptas?" << std::endl;
							std::cout << "Responde 1 para si, 0 para no" << std::endl;
							std::cin >> yesorno;
							if (yesorno==true)
							{
								std::cout << "Aceptas el trio." << std::endl;
								std::cout << "A media echada de pasion llega tu esposa, que haces?" << std::endl;
								std::cout << "Responde 1 para correr, responde 0 para decirle 'No es lo que parece'" << std::endl;
								std::cin >> yesorno;
								if (yesorno==true)
								{
									std::cout << "Decides correr." << std::endl;
									std::cout << "Ni alcanzas a saltar de la cama cuando ya te corto los huevos tu esposa" << std::endl;
									std::cout << "Final: Eso te pasa por infiel, perro" << std::endl;
									std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
									std::cin >> continuar;
								}
								else
								{
									std::cout << "Decides intentar explicar." << std::endl;
									std::cout << "Ni alcanzas a hablar cuando ya te corto los huevos tu esposa" << std::endl;
									std::cout << "Final: Eso te pasa por infiel, perro" << std::endl;
									std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
									std::cin >> continuar;
								}
							}
							else
							{
								std::cout << "No aceptas el trio." << std::endl;
								std::cout << "Tu tio te dice que no le digas a nadie." << std::endl;
								std::cout << "Al chile ni alcanzas a hablar cuando ya te apunialo tu primo, mueres desangradi+o." << std::endl;
								std::cout << "Final: Jijo mano, que triste manerade morir de veras" << std::endl;
								std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
								std::cin >> continuar;
							}
						}
					}
					else
					{
						std::cout << "Sigues con tu camino." << std::endl;
						std::cout << "En tu camino no te fijas al cruzar la calle y un carruaje te atropella." << std::endl;
						std::cout << "Final: Siempre fijate al cruzar la calle." << std::endl;
						std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
						std::cin >> continuar;
					}
				}
			}
		}
		else
		{
			std::cout << "Decidiste salir de tu casa." << std::endl;
			std::cout << "En cuanto sales de tu casa te encuentras con un robo en proceso, que quieres hacer?" << std::endl;
			std::cout << "Responde 1 para ayudar, responde 0 para no hacer nada" << std::endl;
			std::cin >> yesorno;
			if (yesorno==true)
			{
				std::cout << "Decidiste ayudar" << std::endl;
				std::cout << "Que vas a hacer?" << std::endl << "Responde 1 para llegar por detras al ladron y tratar de incapacitarlo, responde 2 para gritarle que deje en paz a la abuelita." << std::endl;
				std::cin >> yesorno;
				if (yesorno==true)
				{
					std::cout << "Decidiste ser cauteloso" << std::endl;
					std::cout << "Te acercas de manera discreta y te posisionas detras de el ladron, ves un palo muy grueso. Que quieres hacer?" << std::endl;
					std::cout << "Responde 1 para ahorcarlo, responde 0 para agarrar el palo y golpearlo en la cabeza" << std::endl;
					std::cin >> yesorno;
					if (yesorno==true)
					{
						std::cout << "Decidiste ahorcarlo" << std::endl;
						std::cout << "Logras ponerlo inconsciente con exito y salvas a la abuelita." << std::endl;
						std::cout << "La abuelita te agradece y te pregunta si quieres ir a su casa para que te de una recomopensa. Que quieres hacer?" << std::endl;
						std::cout << "Responde 1 para si, responde 0 para no." << std::endl;
						std::cin >> yesorno;
						if (yesorno==true)
						{
							std::cout << "Decidiste acompañar a la abuelita a su casa" << std::endl;
							std::cout << "La abuelita empieza a actuar muy sospechosa y te lleva por un camino obscuro" << std::endl;
							std::cout << "Responde 1 para continuar sin tomarle importancia, responde 0 para confrontar a la abuelita" << std::endl;
							std::cin >> yesorno;
							if (yesorno==true)
							{
								std::cout << "No le tomas importancia y sigues" << std::endl;
								std::cout << "El camino obscuro termina y llegas a una mansion, resulta que la abuelita es una millonaria y te llevo por un pasadizo secreto para que nadie los pudiera seguir" << std::endl;
								std::cout << "La abuelita te da como recompensa un caballo y una espada legendaria" << std::endl;
								std::cout << "Final: siempre ayuda y confia en las abuelitas" << std::endl;
								std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
								std::cin >> continuar;
							}
							else
							{
								std::cout << "La confrantas" << std::endl;
								std::cout << "Te dice 'Al chile nadie desconfia de abuelita' y te mata" << std::endl;
								std::cout << "Final: Nadie desconfia de abuelita." << std::endl;
								std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
								std::cin >> continuar;
							}
						}
						else
						{
							std::cout << "Respondes que no." << std::endl;
							std::cout << "La abuelita te dice que tu te lo pierdes y te da 10 chelines." << std::endl;
							std::cout << "Que haces con los 10 chelines?" << std::endl << "Responde 1 para gastarlos en un pajarete, responde 0 para ahorrarlos" << std::endl;
							std::cin >> yesorno;
							if (yesorno == true)
							{
								std::cout << "Te lo gastas en un pajarete." << std::endl;
								std::cout << "Te da chorro, ni modo" << std::endl;
								std::cout << "Final: Minimo quedaste bien con todos" << std::endl;
								std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
								std::cin >> continuar;
							}
							else
							{
								std::cout << "Lo ahorras" << std::endl;
								std::cout << "Un dia sale una espada de coleccion y justo te sale en 10 chelines" << std::endl;
								std::cout << "Lo compras." << std::endl;
								std::cout << "Final: Ahorrar siempre trae cosas buenas." << std::endl;
								std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
								std::cin >> continuar;
							}
						}
					}
				}
				else
				{
					std::cout << "Le gritas que deje en paz a la abuelita." << std::endl;
					std::cout << "Se enoja y se va contra ti, ves que trae un cuchillo. Que haces?" << std::endl;
					std::cout << "Responde 1 para enfrentarlo con tu espada, responde 0 para enfrentarlo a mano limpia." << std::endl;
					std::cin >> yesorno;
					if (yesorno==true)
					{
						std::cout << "Lo enfrentas con tu espada." << std::endl;
						std::cout << "Le ganas, ah perro" << std::endl;
						std::cout << "La abuelita te agradece y te pregunta si quieres ir a su casa para que te de una recomopensa. Que quieres hacer?" << std::endl;
						std::cout << "Responde 1 para si, responde 0 para no." << std::endl;
						std::cin >> yesorno;
						if (yesorno == true)
						{
							std::cout << "Decidiste acompañar a la abuelita a su casa" << std::endl;
							std::cout << "La abuelita empieza a actuar muy sospechosa y te lleva por un camino obscuro" << std::endl;
							std::cout << "Responde 1 para continuar sin tomarle importancia, responde 0 para confrontar a la abuelita" << std::endl;
							std::cin >> yesorno;
							if (yesorno == true)
							{
								std::cout << "No le tomas importancia y sigues" << std::endl;
								std::cout << "El camino obscuro termina y llegas a una mansion, resulta que la abuelita es una millonaria y te llevo por un pasadizo secreto para que nadie los pudiera seguir" << std::endl;
								std::cout << "La abuelita te da como recompensa un caballo y una espada legendaria" << std::endl;
								std::cout << "Final: siempre ayuda y confia en las abuelitas" << std::endl;
								std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
								std::cin >> continuar;
							}
							else
							{
								std::cout << "La confrantas" << std::endl;
								std::cout << "Te dice 'Al chile nadie desconfia de abuelita' y te mata" << std::endl;
								std::cout << "Final: Nadie desconfia de abuelita." << std::endl;
								std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
								std::cin >> continuar;
							}
						}
					}
					else
					{
						std::cout << "Peleas a mano limpia. Pierdes, obviamente, o sea, a quien se le ocurre" << std::endl;
						std::cout << "Te mueres desangrado." << std::endl;
						std::cout << "Final: Es que a quien se le ocurre" << std::endl;
						std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
						std::cin >> continuar;
					}
				}
			}
			else
			{
				std::cout << "Decidiste no hacer nada, al chile que mala onda" << std::endl;
				std::cout << "El robo termina y los caballeros llegan. Que haces?" << std::endl;
				std::cout << "Responde 1 para acercarte y dar la descripcion del ladron, responde 0 para no hacer nada" << std::endl;
				std::cin >> yesorno;
				if (yesorno==true)
				{
					std::cout << "Decidiste declarar con los caballeros." << std::endl;
					std::cout << "Te preguntan por que no hiciste nada, que respondes?" << std::endl;
					std::cout << "Responde 1 para decir que te dio miedo, responde 0 para no decir nada" << std::endl;
					std::cin >> yesorno;
					if (yesorno==true)
					{
						std::cout << "Dices que te dio miedo." << std::endl;
						std::cout << "Los caballeros se rien y te dicen ninio mion, exparcen el rumor y ahora todos te dicen ninio mion" << std::endl;
						std::cout << "Final: ajjajaj el ninio mion" << std::endl;
						std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
						std::cin >> continuar;
					}
					else
					{
						std::cout << "Te quedas callado." << std::endl;
						std::cout << "La abuelita dice que eres complice y los caballeros le creen" << std::endl;
						std::cout << "Te cortan las manos por ratero." << std::endl;
						std::cout << "Final: por culo" << std::endl;
						std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
						std::cin >> continuar;
					}
				}
				else
				{
					std::cout << "Decides no hacer nada." << std::endl;
					std::cout << "Los caballeros te ven feo asi que mejor te metes a tu casa." << std::endl;
					std::cout << "Tocan la puerta. Que haces?" << std::endl;
					std::cout << "Responde 1 para abrirla, responde 0 para hacerte wey" << std::endl;
					std::cin >> yesorno;
					if (yesorno==true)
					{
						std::cout << "La abres" << std::endl;
						std::cout << "Es tu mama, resulta que la abuelita que asaltaron es amiga de la infancia de tu mama, te pone la cagotiza de tu vida por no ayudarla." << std::endl;
						std::cout << "Te dice que vayas a casa de la abuelita a hacerle mandados para pagar el favor, aceptas?" << std::endl;
						std::cout << "1= Si, 0=No" << std::endl;
						std::cin >> yesorno;
						if (yesorno==true)
						{
							std::cout << "Aceptas." << std::endl;
							std::cout << "Te la pasas un mes haciendo tareas para la abuelita hasta que te dice que ya es suficiente." << std::endl;
							std::cout << "Te da 10 chelines porque es buena onda." << std::endl;
							std::cout << "Que haces con los 10 chelines?" << std::endl << "Responde 1 para gastarlos en un pajarete, responde 0 para ahorrarlos" << std::endl;
							std::cin >> yesorno;
							if (yesorno==true)
							{
								std::cout << "Te lo gastas en un pajarete." << std::endl;
								std::cout << "Te da chorro, ni modo" << std::endl;
								std::cout << "Final: Minimo quedaste bien con todos" << std::endl;
								std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
								std::cin >> continuar;
							}
							else
							{
								std::cout << "Lo ahorras" << std::endl;
								std::cout << "Un dia sale una espada de coleccion y justo te sale en 10 chelines" << std::endl;
								std::cout << "Lo compras." << std::endl;
								std::cout << "Final: Ahorrar siempre trae cosas buenas." << std::endl;
								std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
								std::cin >> continuar;
							}
						}
						else
						{
							std::cout << "Te niegas porque segun tu al chile no le debes nada." << std::endl;
							std::cout << "Tu jefita te dice que ni modo, lo intento." << std::endl;
							std::cout << "Entran unos caballeros y te meten una golpiza por cobarde." << std::endl;
							std::cout << "Final: Siempre hazle caso a tu jefita" << std::endl;
							std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
							std::cin >> continuar;
						}
					}
					else
					{
						std::cout << "Te haces wey." << std::endl;
						std::cout << "Te dejan una nota en la puerta diciendo que te van a dejar sin huevos por cobarde." << std::endl;
						std::cout << "Es la letra de tu mama, asi que le crees y huyes del reino." << std::endl;
						std::cout << "Final: Las jefitas enojadas dan miedo." << std::endl;
						std::cout << "Has llegado hasta aquí, desaeas continuar?\nResponde 1 para si, 0 para no." << std::endl;
						std::cin >> continuar;
					}
				}
			}
		}
	}
}