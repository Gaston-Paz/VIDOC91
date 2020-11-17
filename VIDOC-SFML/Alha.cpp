#include <SFML/Graphics.hpp>
#include "Personaje.h"
#include "Alha.h"



Alha::Alha(){
setnombre("Alha");
setsalud(100);
division_personaje.x = 8 ;
division_personaje.y = 4;
Alhaito.setTexture(personajes);
Alhaito.setPosition(1056,160);
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
Danio = 40;
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

}

void Alha::setEstado(ESTADOS_PERSONAJE actual){
movimiento = actual;
}

ESTADOS_PERSONAJE Alha::getEstado(){
return movimiento;
}

void Alha::setpersonajenivel(){

sf::IntRect posicion(45*1,78*2,45,70);
Alhaito.setTextureRect(posicion);
Alhaito.setPosition(100,180);
Alhaito.scale(5,5);

}

sf::Sprite& Alha::getpersonajenivel(){

return Alhaito;

}
