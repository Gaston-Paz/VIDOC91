#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "Mapa.h"
#include "Alha.h"
using namespace sf;


class juego{
protected:
RenderWindow *pantalla;
Texture * fondo;
Sprite * mapa;
Texture * perso;
Sprite * personaje;
Texture * prese;
Sprite * presentacion;
Texture * log;
Sprite * logo;
Event * mover;
Font *fuente;
Text *leyenda;
Event *mover_menu;
public:
void imprimir_pantalla();
void ciclo(Mapa *Mapita);
void moverlo();
void presentacionJuego();
void imprimir_fondo();
void cargar_imagenes();
void crear_pantalla(int tamanio_x, int tamanio_y, char *titulo);
void imprimir_menu();
void funciones_menu(Menu *Principal);
void movimiento_menu(Menu *Principal, int *variable);
void variable_valor(int *variable);
void caminar(Alha *Munieco);
};






#endif // JUEGO_H_INCLUDED
