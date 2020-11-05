#ifndef CASA_H_INCLUDED
#define CASA_H_INCLUDED
#include <SFML/Graphics.hpp>

using namespace sf;

class Casa{
private:
Texture home;
Sprite casita;
Texture home1;
Sprite casita1;
Texture home2;
Sprite casita2;
Texture home3;
Sprite casita3;
Texture home4;
Sprite casita4;

public:
void setcasita();
Sprite &getcasita();
Sprite &getcasita1();
Sprite &getcasita2();
Sprite &getcasita3();
Sprite &getcasita4();

};

#endif // CASA_H_INCLUDED
