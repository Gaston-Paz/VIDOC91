#ifndef CASA_H_INCLUDED
#define CASA_H_INCLUDED
#include <SFML/Graphics.hpp>

using namespace sf;

class Casa{
private:
Texture *home;
Sprite *casita;


public:
void setcasita();
Sprite &getcasita();

};

#endif // CASA_H_INCLUDED
