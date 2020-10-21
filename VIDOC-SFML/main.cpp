#include <SFML/Graphics.hpp>
#include "juego.h"
#include "nivel.h"
using namespace sf;


int main(int argc, char * args[])
{
juego * vidoc;
vidoc = new juego;
vidoc->crear_pantalla(1280,720,"VIDOC91");
vidoc->cargar_imagenes();
vidoc->presentacionJuego();
vidoc->ciclo();
nivel * level;
level = new nivel;
level->cargar_imagenes(1,100);
level->imprimir_imagenes();

return 0;}
