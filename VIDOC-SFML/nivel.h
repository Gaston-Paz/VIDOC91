#ifndef NIVEL_H_INCLUDED
#define NIVEL_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "Alha.h"
#include "Raviolete.h"
using namespace sf;

class nivel{
private:
Texture fondo;
Sprite fondi;
Alha personaje;
Raviolete ravio;
///IU interfaz;
public:
nivel(int level);
void setfondos1();
Sprite &getfondo1();

};

#endif // NIVEL_H_INCLUDED

