#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED
#include <SFML/Graphics.hpp>

using namespace sf;


class juego{
private:
RenderWindow *pantalla;
Texture * fondo;
Sprite * mapa;
public:
juego(int tamanio_x, int tamanio_y, char *titulo);
void imprimir_pantalla();
void ciclo();
};






#endif // JUEGO_H_INCLUDED
