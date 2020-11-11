#include <SFML/Graphics.hpp>
#include "Personaje.h"
#include "Alha.h"



Alha::Alha(){
setnombre("Alha");
setsalud(100);
Diosito.loadFromFile("perso.png");
division_personaje.x = 8 ;
division_personaje.y = 4;
Alhaito.setTexture(Diosito);
Alhaito.setPosition(400,200);
setpersonajeimagen(47,0,47,72);

}

int Alha::getdanio(){
int Danio;
setataque();
switch(Tipo_ataque){
case 1:
Danio = 10;
break;
case 2:
Danio = 20;
break;
case 3:
Danio = 30;
break;
case 4:
Danio = 60;
break;
}
return Danio;
}

bool Alha::defenderse(){
Defensa = rand()%1;
srand(time(NULL));
return Defensa;
}

sf::Sprite &Alha::getpersonaje(){
return Alhaito;
}

void Alha::setpersonajeimagen(int a, int b, int c, int d){

sf::IntRect posicion(a,b,c,d);
Alhaito.setTextureRect(posicion);

}

int Alha::posicionpersonajex(){
return Alhaito.getPosition().x;
}

int Alha::posicionpersonajey(){
return Alhaito.getPosition().y;
}

void Alha::setataque(){
Tipo_ataque = rand()%4+1;
srand(time(NULL));
}

void Alha::setEstado(ESTADOS_PERSONAJE actual){
movimiento = actual;
}

ESTADOS_PERSONAJE Alha::getEstado(){
return movimiento;
}
