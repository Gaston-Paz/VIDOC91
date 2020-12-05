#ifndef MENU-PARTIDA_H_INCLUDED
#define MENU-PARTIDA_H_INCLUDED

#include <SFML/Graphics.hpp>


class Menu_Partida{
private:
    unsigned int tics = 0;
    sf::Texture fondo;
    sf::Sprite fon;
    sf::Font fuent;
    sf::Text guardarPartida;
    sf::Text volver;

public:
    Menu_Partida();
    sf::Sprite& getSprite();
    sf::Text& getVolver();
    sf::Text& getguardarPartida();
    void seleccionado(int , sf::RenderWindow *window);
    int seccionPartida(sf::RenderWindow *window);
    void setOpciones(int );
};



#endif // MENU-PARTIDA_H_INCLUDED
