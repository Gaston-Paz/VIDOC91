#ifndef ALHA_H_INCLUDED
#define ALHA_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "Personaje.h"

using namespace sf;

class Alha:public Personaje{
private:
Sprite Alhaito;
Texture Diosito;
Sprite Alhaito_nivel;
Texture Diosito_nivel;
Event *mover;
Sprite Alhaito1;
Texture Diosito1;
int Tipo_ataque;

public:
Alha();
int getdanio();
void entrar_nivel();
bool defenderse();
Sprite &getpersonaje();
void curacion();
Sprite &getpersonajenivel();
void setpersonajeimagennivel();
void setpersonajeimagen(int a, int b);
void setpersonajeimageniz(int a, int b);
void setpersonajeimageniz2(int a, int b);
void setpersonajeimagende(int a, int b);
void setpersonajeimagenat(int a, int b);
int posicionpersonajex();
int posicionpersonajey();
void setataque();

};


#endif // ALHA_H_INCLUDED
