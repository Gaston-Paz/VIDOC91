#ifndef CALLE_H_INCLUDED
#define CALLE_H_INCLUDED
#include <SFML/Graphics.hpp>

using namespace sf;

class Calle{
private:
Sprite *carretera;
Texture *calle1;
public:

void setcallesita();
Sprite &getcallesita();

};

#endif // CALLE_H_INCLUDED
