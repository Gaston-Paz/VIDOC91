#ifndef RAVIOLETE_H_INCLUDED
#define RAVIOLETE_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "Personaje.h"
using namespace sf;

class Raviolete:public Personaje{
private:
Texture imagen;
Sprite raviol;
int Tipo_ataque;

public:
Raviolete();
void setimagen();
Sprite &raviolImagen();
int getataque();
void setataque();
};

#endif // RAVIOLETE_H_INCLUDED
