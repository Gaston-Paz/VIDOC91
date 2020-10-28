#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED
#include <SFML/Graphics.hpp>

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
Text *juegoNuevo;
Text *continuarPartida;
Text *puntuaciones;
Text *salir;


public:
juego(int x, int y, char * titulo);
void imprimir_pantalla();
void ciclo();
void moverlo();
void presentacionJuego();
void imprimir_fondo();
void cargar_imagenes();
void crear_pantalla(int tamanio_x, int tamanio_y, char *titulo);
void pintar_menu();



};






#endif // JUEGO_H_INCLUDED
