#ifndef CALLE_H_INCLUDED
#define CALLE_H_INCLUDED
#include <SFML/Graphics.hpp>

using namespace sf;

class Calle{
private:
Sprite *carretera1;
Texture *calle1;
Sprite *carretera2;
Texture *calle2;
Sprite *carretera3;
Texture *calle3;
Sprite *carretera4;
Texture *calle4;
Sprite *carretera5;
Texture *calle5;
Sprite *carretera6;
Texture *calle6;
Sprite *carretera7;
Texture *calle7;
Sprite *carretera8;
Texture *calle8;
Sprite *carretera9;
Texture *calle9;
Sprite *carretera10;
Texture *calle10;
public:

void setcallesita();
Sprite &getcallesita();
Sprite &getcallesita2();
Sprite &getcallesita3();
Sprite &getcallesita4();
Sprite &getcallesita5();
Sprite &getcallesita6();
Sprite &getcallesita7();
Sprite &getcallesita8();
Sprite &getcallesita9();
Sprite &getcallesita10();
};

#endif // CALLE_H_INCLUDED
