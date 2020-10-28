#include <SFML/Graphics.hpp>
#include "Personaje.h"
#include "Alha.h"

using namespace sf;

Alha::Alha(){
setnombre("Alha");
setsalud(100);
}

int Alha::getdanio(){
int Danio;
setataque();
switch(getataque()){
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

void Alha::entrar_nivel(){

}

/*int Alha::defenderse(){
if()
}
*/
Sprite Alha::getpersonaje(){
return *Alhaito;
}
/*
void Alha::perder_vida(){

}

void Alha::curacion(){
Salud += 20;

}

Sprite Alha::getpersonajenivel(){
return *Alhaito_nivel;
}
*/
void Alha::setpersonajeimagen(){

Diosito = new Texture;
Alhaito = new Sprite;
Diosito->loadFromFile("loqui.png");
Alhaito->setTexture(*Diosito);

}

/*void Alha::setpersonajeimagennivel(){
Diosito_nivel = new Texture;
Alhaito_nivel = new Sprite;
Diosito_nivel->loadFromFile("Puto el que lee.pito");
Alahito_nivel->setTexture(*Diosito_nivel);

}
*/
/*FALTA DESARROLLAR
void entrar_nivel()
int defenderse()
void perder_vida()
void curacion()
void setpersonajeimagennivel()
*/
