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

int Personaje::getsalud(){
return Salud;
}

char Personaje::getnombre(){
return *Nombre;
}

bool Personaje::getdefensa(){
return Defensa;
}

void Personaje::bajar_salud(int Danio){
if(Salud-Danio <= 0){
    Salud = 0;
}else{
Salud -= Danio;
}
}



