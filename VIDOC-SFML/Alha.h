#ifndef ALHA_H_INCLUDED
#define ALHA_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "Personaje.h"

enum ESTADOS_PERSONAJE{
camina_derecha,
camina_izquierda,
camina_arriba,
camina_abajo,
esperando,
atacando
};


class Alha:public Personaje{
private:
sf::Sprite Alhaito;
sf::Texture Diosito;
int Tipo_ataque;
sf::Vector2i division_personaje;
ESTADOS_PERSONAJE movimiento;
sf::Sprite barraVida;



public:
Alha();
int getdanio();
void entrar_nivel();
bool defenderse();
sf::Sprite &getpersonaje();
void curacion();
void setpersonajeimagennivel();
void setpersonajeimagen(int a, int b, int c, int d);
int posicionpersonajex();
int posicionpersonajey();
void setataque();
void setEstado(ESTADOS_PERSONAJE actual);
ESTADOS_PERSONAJE getEstado();
sf::Sprite& getpersonajenivel();
void setpersonajenivel();
sf::Sprite& getbarraVida(int vida);
void ataca(int x);
void setpersonajeMuevenivel(int x);




};


#endif // ALHA_H_INCLUDED
