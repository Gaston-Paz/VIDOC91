#ifndef ALHA_H_INCLUDED
#define ALHA_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "Personaje.h"

using namespace sf;

class Alha:public Personaje{
private:
Sprite *Alhaito;
Texture *Diosito;
Sprite *Alhaito_nivel;
Texture *Diosito_nivel;
Event *mover;
///getbox?

public:

Alha();
int getdanio();
void entrar_nivel();
int defenderse();
Sprite getpersonaje();
void perder_vida();
void curacion();
Sprite getpersonajenivel();
void setpersonajeimagennivel();
<<<<<<< HEAD
void setpersonajeimagen(int a, int b);
=======
void setpersonajeimagen();
>>>>>>> 1d4435fef2687bca096edd8932279848cee72d62
};


#endif // ALHA_H_INCLUDED
