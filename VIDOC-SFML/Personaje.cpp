#include <SFML/Graphics.hpp>
#include "Personaje.h"
#include <cstring>

using namespace sf;

void Personaje::setnombre(char Nombrecito[50]){
strcpy(Nombre,Nombrecito);
}

void Personaje::setsalud(int Saludcito){
Salud = Saludcito;
}

void Personaje::setdefensa(bool Condicion){
Defensa = Condicion;
}

void Personaje::setataque(){
srand(time(NULL));
Tipo_ataque = rand()%4+1;
}

int Personaje::getsalud(){
return Salud;
}

char Personaje::getnombre(){
return *Nombre;
}

bool Personaje::getdefensa(){
return Defensa;
}

int Personaje::getataque(){
return Tipo_ataque;
}

void Personaje::bajar_salud(int Danio){
Salud -= Danio;
}



