#include <SFML/Graphics.hpp>
#include "Personaje.h"
#include "Alha.h"



Alha::Alha(){
setsalud(100);
division_personaje.x = 8 ;
division_personaje.y = 4;
Alhaito.setTexture(personajes);
Alhaito.setPosition(1056,160);
setpersonajeimagen(47,0,47,72);
barraVida.setTexture(vida);
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
Danio = 25;
break;
}
return Danio;
}

bool Alha::defenderse(){
Defensa = rand()%1;
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
sf::IntRect posicion(45,78*2,45,70);
Alhaito.setTextureRect(posicion);
Alhaito.setPosition(100,180);
Alhaito.scale(5,5);
}

void Alha::setpersonajeMuevenivel(int x){
sf::IntRect posicion(45*x,78*2,45,70);
Alhaito.setTextureRect(posicion);
Alhaito.setPosition(100,180);

if(Alhaito.getPosition().x + Alhaito.getGlobalBounds().width < 890){
    Alhaito.move(600,0);
}

}

sf::Sprite& Alha::getpersonajenivel(){
return Alhaito;
}

sf::Sprite& Alha::getbarraVida(int vida){
int a;
if(vida <= 100 && vida >= 90){
    a = 0;
}else{
if(vida < 90 && vida >= 70){
    a = 1;
}else{
if(vida < 70 && vida >= 50){
    a = 2;
}else{
if(vida < 50 && vida >= 30){
    a = 3;
}else{
if(vida < 30){
    a = 4;
}
}
}
}
}
sf::IntRect recorte(0,a*98,470,98);
barraVida.setTextureRect(recorte);
barraVida.setPosition(30,5);
return barraVida;
}

void Alha::ataca(int x){
setpersonajenivel();
}

void Alha::curacion(int cura){
Salud += cura;
}




