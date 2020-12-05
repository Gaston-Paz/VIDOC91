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
    sf::Sprite &getSprite();
    void setmalonivel(int level);
    sf::Sprite& getmalonivel();
    int getdanio(int level);
    void setdanio();
    void setEstado(ESTADO_ENEMY actual);
    ESTADO_ENEMY getEstado();
    sf::Sprite& getbarraVida(int vida);
    void setpersonajeMuevenivel(int x, int level);
};


#endif // ENEMY_H_INCLUDED
