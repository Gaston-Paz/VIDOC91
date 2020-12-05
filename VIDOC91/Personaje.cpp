#include <SFML/Graphics.hpp>
#include "Personaje.h"
#include <cstring>

using namespace sf;

Personaje::Personaje(){
setTextura();
setTexturavida();
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

void Personaje::setTextura(){
personajes.loadFromFile("perso.png");
}

void Personaje::setTexturavida(){
vida.loadFromFile("barra.png");
}
