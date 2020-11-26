#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include "convert.h"


Convert::Convert(){
fuentecita.loadFromFile("Base05.ttf");
textito.setFont(fuentecita);
textito.setFillColor(sf::Color::Green);
textito.setPosition(1200,1);
nivelcito.setFont(fuentecita);
nivelcito.setFillColor(sf::Color::Green);
nivelcito.setPosition(290,1);
}

void Convert::setpuntaje(int aux){
puntitos = aux;
std::stringstream cambiador;
cambiador << puntitos;
textito.setString(cambiador.str());
}

sf::Text &Convert::gettexto(){
return textito;

}


void Convert::setpuntajenivel(int aux){
puntitos = aux;
std::stringstream cambiador;
cambiador << puntitos;
nivelcito.setString(cambiador.str());
}

sf::Text &Convert::getpuntajenivel(){
return nivelcito;
}
