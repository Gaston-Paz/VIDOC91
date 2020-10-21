#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED
#include <SFML/Graphics.hpp>

using namespace sf;


class juego{
private:
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
public:
juego(int tamanio_x, int tamanio_y, char *titulo);
void imprimir_pantalla();
void ciclo();
void moverlo();
void presentacionJuego();
};





#endif // JUEGO_H_INCLUDED
