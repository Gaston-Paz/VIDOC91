#include <SFML/Graphics.hpp>
#include "juego.h"
#include "Presentacion.h"
#include "Menu.h"

using namespace sf;


int main(int argc, char * args[])
{
juego * vidoc;
vidoc = new juego;
vidoc->crear_pantalla(1280,720,"VIDOC91");
vidoc->presentacionJuego();
vidoc->imprimir_menu();
return 0;}
