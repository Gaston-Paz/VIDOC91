#ifndef ALHA_H_INCLUDED
#define ALHA_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "Personaje.h"

enum ESTADOS_PERSONAJE{
camina_derecha,
camina_izquierda,
camina_arriba,
camina_abajo,

};


class Alha:public Personaje{
private:
sf::Sprite Alhaito;
sf::Texture Diosito;
int Tipo_ataque;
sf::Vector2i division_personaje;
ESTADOS_PERSONAJE movimiento;

public:
Alha();
int getdanio();
void entrar_nivel();
bool defenderse();
sf::Sprite &getpersonaje();
void curacion();
sf::Sprite &getpersonajenivel();
void setpersonajeimagennivel();
void setpersonajeimagen(int a, int b, int c, int d);
void setpersonajeimageniz(int a, int b);
void setpersonajeimageniz2(int a, int b);
void setpersonajeimagende(int a, int b);
void setpersonajeimagenat(int a, int b);
int posicionpersonajex();
int posicionpersonajey();
void setataque();
void setEstado(ESTADOS_PERSONAJE actual);
ESTADOS_PERSONAJE getEstado();
};


#endif // ALHA_H_INCLUDED
