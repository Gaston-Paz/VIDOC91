#ifndef NIVEL_H_INCLUDED
#define NIVEL_H_INCLUDED
#include <SFML/Graphics.hpp>

class nivel{

private:
int dificultad;
Texture * escena;
Sprite * escenografia;
Texture * barra;
Sprite * salud;


public:
nivel(int progreso, int life);
void setDificultad(int difi);
void setEscenografia();
void setSalud(int vida);
void cargar_imagenes(int difi, int vida);
///void imprimir_imagenes();
Texture getEscena();
Sprite getEscenografia();
};

#endif // NIVEL_H_INCLUDED

