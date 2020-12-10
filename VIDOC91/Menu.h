#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <SFML/Graphics.hpp>

class Menu{
private:
    sf::Text opcion[3];
    sf::Font Tipografia;
    sf::Texture Prese;
    sf::Sprite Presentacion;

public:
    Menu();
    void setopcion(int x,int y,char *Fuente,char *Titulo,bool Pinta, int i);
    void setfondomenu();
    sf::Sprite &getfondomenu();
    sf::Text &getnuevo();
    sf::Text &getcontinuar();
    sf::Text &getsalir();
    sf::Font &getfuente();
};

#endif // MENU_H_INCLUDED
