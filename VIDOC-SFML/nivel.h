#ifndef NIVEL_H_INCLUDED
#define NIVEL_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "Alha.h"
#include "enemy.h"



class nivel{
private:
sf::Texture fondo;
sf::Sprite fondi;
Alha princi;
enemigo maldito;
sf::Font fuent;
sf::Text ataque;
sf::Text defensa;
sf::RectangleShape cajas;
sf::RectangleShape caja;
public:
nivel();
nivel(int level);
///~nivel();
void setfondos1(int level);
sf::Sprite &getfondo1();
sf::Sprite& personajeprincipalnivel();
sf::Sprite& personajemalonivel();
sf::RectangleShape getcaja(int caji);
sf::RectangleShape getcajas(int caji);
sf::Text& getdefensa();
sf::Text& getatacar();

};

#endif // NIVEL_H_INCLUDED

