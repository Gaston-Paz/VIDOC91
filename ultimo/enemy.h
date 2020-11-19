#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "Personaje.h"

enum ESTADO_ENEMY{
espera,
ataque
};

class enemigo:public Personaje{
private:
sf::Sprite malo;
int Tipo_ataque;
ESTADO_ENEMY movimieto;
sf::Sprite barraVida;


public:
enemigo();
enemigo(int level);
sf::Sprite &getSprite();
void setmalonivel();
sf::Sprite& getmalonivel();
int getdanio();
void setdanio();
void setEstado(ESTADO_ENEMY actual);
ESTADO_ENEMY getEstado();
sf::Sprite& getbarraVida(int vida);
void setpersonajeMuevenivel(int x);
};


#endif // ENEMY_H_INCLUDED
