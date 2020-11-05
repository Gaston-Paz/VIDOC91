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

Sprite &Alha::getpersonaje(){
return Alhaito;
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

void Alha::setpersonajeimagen(int a, int b){


Diosito.loadFromFile("PERSONAJEPRUEBA.png");
Alhaito.setTexture(Diosito);

Alhaito.setPosition(a, b);
}

void Alha::setpersonajeimageniz(int a, int b){


Diosito.loadFromFile("PERSONAJEIZQUIERDA.png");
Alhaito.setTexture(Diosito);

Alhaito.setPosition(a, b);
}

void Alha::setpersonajeimageniz2(int a, int b){


Diosito.loadFromFile("PERSONAJEIZQUIERDA2.png");
Alhaito.setTexture(Diosito);

Alhaito.setPosition(a, b);
}

void Alha::setpersonajeimagende(int a, int b){


Diosito.loadFromFile("PERSONAJEDERECHA.png");
Alhaito.setTexture(Diosito);
Alhaito.setPosition(a, b);
}

void Alha::setpersonajeimagenat(int a, int b){

Diosito.loadFromFile("PERSONAJEATRAS.png");
Alhaito.setTexture(Diosito);
Alhaito.setPosition(a, b);
}

int Alha::posicionpersonajex(){
return Alhaito.getPosition().x;
}

int Alha::posicionpersonajey(){
return Alhaito.getPosition().y;
}


/*void Alha::setpersonajeimagennivel(){
Diosito_nivel = new Texture;
Alhaito_nivel = new Sprite;
Diosito_nivel->loadFromFile("Puto el que lee.pito");
Alahito_nivel->setTexture(*Diosito_nivel);

}

FALTA DESARROLLAR
void entrar_nivel()
int defenderse()
void perder_vida()
void curacion()
void setpersonajeimagennivel()
*/
