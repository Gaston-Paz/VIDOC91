#ifndef PERSONAJE_H_INCLUDED
#define PERSONAJE_H_INCLUDED
#include <SFML/Graphics.hpp>
using namespace sf;

class Personaje{

protected:
char Nombre[50];
int Salud;
bool Defensa;
sf::Texture personajes;
sf::Texture vida;


public:
Personaje();
void setnombre(char Nombrecito[50]);
void setsalud(int Saludcito);
void setdefensa(bool Condicion);
void setataque();
char getnombre();
bool getdefensa();
void bajar_salud(int Danio);
int getsalud();
void setTextura();
void setTexturavida();

};



#endif // PERSONAJE_H_INCLUDED
