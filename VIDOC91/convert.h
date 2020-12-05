#ifndef CONVERT_H_INCLUDED
#define CONVERT_H_INCLUDED
#include <SFML/Graphics.hpp>
#include <sstream>
#include "Menu.h"

class Convert{
private:
    int puntitos;
    sf::Text textito;
    sf::Text nivelcito;
    sf::Font fuentecita;

public:
    Convert();
    void setpuntaje(int aux);
    sf::Text &gettexto();
    void setpuntajenivel(int aux);
    sf::Text &getpuntajenivel();
};



#endif // CONVERT_H_INCLUDED
