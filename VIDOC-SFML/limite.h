#ifndef LIMITE_H_INCLUDED
#define LIMITE_H_INCLUDED

#include <SFML/Graphics.hpp>


class limite{
public:
sf::RectangleShape lim;

public:
void setearlimite(int x, int y, int a, int b);
sf::RectangleShape getlimite(int x, int y, int a, int b);


};


#endif // LIMITE_H_INCLUDED
