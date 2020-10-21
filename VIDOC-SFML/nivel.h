#ifndef NIVEL_H_INCLUDED
#define NIVEL_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "juego.h"


class nivel:public juego{

private:
int dificultad;
Texture * escena;
Sprite * escenografia;
Texture * barra;
Sprite * salud;
RenderWindow *pantalla;
public:
void nivel_pantalla(int x, int y, char *titulo);
void setDificultad(int difi);
void setEscenografia();
void setSalud(int vida);
void cargar_imagenes(int difi, int vida);
void imprimir_imagenes();

};

#endif // NIVEL_H_INCLUDED

