
#include "limite.h"




sf::RectangleShape limite::getlimite(int x, int y, int a, int b){
sf::RectangleShape lim(sf::Vector2f(x,y));
lim.setFillColor(sf::Color::Green);
lim.setPosition(a,b);
return lim;
}

void limite::setearlimite(int x, int y, int a, int b){
sf::RectangleShape limite(sf::Vector2f(x,y));
lim.setFillColor(sf::Color::Green);
lim.setPosition(a,b);
}
