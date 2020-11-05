#ifndef PRESENTACION_H_INCLUDED
#define PRESENTACION_H_INCLUDED
#include <SFML/Graphics.hpp>
using namespace sf;

class Presentacion{
private:
Sprite Logo;
Texture Fondo;
public:
void setpresentacion();
Sprite &getpresentacion();
};


#endif // PRESENTACION_H_INCLUDED
