#ifndef NIVEL_H_INCLUDED
#define NIVEL_H_INCLUDED
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
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
    unsigned int tics = 0;
    sf::Texture pina;
    sf::Sprite golpe;
    sf::Sprite muerte;
    sf::Text winOlose;
    sf::Music musica;
    sf::Music explosion;


public:
    nivel();
    nivel(int level);
    void setfondos1(int level);
    sf::Sprite &getfondo1();
    sf::Sprite& personajeprincipalnivel();
    sf::Sprite& personajemalonivel();
    sf::RectangleShape getcaja(int caji);
    sf::RectangleShape getcajas(int caji);
    sf::Text& getdefensa();
    sf::Text& getatacar();
    Alha& getpersonaje();
    enemigo& getmalo();
    void principalAtaca(int x);
    void setTexturaGolpe();
    sf::Sprite& getSpriteGolpe();
    void recorteGolpe(int x, int y, bool bandera);
    void setmuerte(bool bandera);
    sf::Sprite& getmuerete();
    void setMensajeFinal(bool perdio);
    sf::Text perdiste();
    sf::Music& getMusica();
    sf::Music& getexplosion();

};

#endif // NIVEL_H_INCLUDED

