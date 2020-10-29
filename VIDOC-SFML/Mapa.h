#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED
#include <SFML/Graphics.hpp>
using namespace sf;

class Mapa{
private:
Sprite *Mapa;
Texture *Archivo;

public:
void setmapa();
Sprite getmapa();
};

#endif // MAPA_H_INCLUDED
