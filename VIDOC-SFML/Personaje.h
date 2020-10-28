#ifndef PERSONAJE_H_INCLUDED
#define PERSONAJE_H_INCLUDED
#include <SFML/Graphics.hpp>
using namespace sf;

class Personaje{

protected:
char Nombre[50];
int Salud;
bool Defensa;
int Tipo_ataque;

public:
void setnombre(char Nombrecito[50]);
void setsalud(int Saludcito);
void setdefensa(bool Condicion);
void setataque();
int getataque();
int getsalud();
char getnombre();
bool getdefensa();
void bajar_salud(int Danio);
};



#endif // PERSONAJE_H_INCLUDED
