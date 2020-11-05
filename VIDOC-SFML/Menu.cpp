#include <SFML/Graphics.hpp>
#include "Menu.h"

using namespace sf;

void Menu::setopciones(int Cantidad){
Opciones = Cantidad;
}

void Menu::setopcionesataques(int Cantidad){
Opciones = Cantidad;
}

void Menu::setfondomenu(){
Prese.loadFromFile("fondomenu.png");
Presentacion.setTexture(Prese);

}

Sprite &Menu::getfondomenu(){
return Presentacion;

}

void Menu::setnuevo(int x,int y,char *Fuente,char *Titulo, bool Pinta){

Tipografia.loadFromFile(Fuente);


nuevo.setFont(Tipografia);
nuevo.setString(Titulo);
nuevo.setPosition(x,y);
if(Pinta){
nuevo.setColor(Color::Red);
}
else{
nuevo.setColor(Color::White);
}}

void Menu::setcontinuar(int x,int y,char *Fuente,char *Titulo, bool Pinta){

Tipografia.loadFromFile(Fuente);


continuar.setFont(Tipografia);
continuar.setString(Titulo);
continuar.setPosition(x,y);
if(Pinta){
continuar.setColor(Color::Red);
}
else{
continuar.setColor(Color::White);
}}

void Menu::setpuntuacion(int x,int y,char *Fuente,char *Titulo, bool Pinta){

Tipografia.loadFromFile(Fuente);


puntuacion.setFont(Tipografia);
puntuacion.setString(Titulo);
puntuacion.setPosition(x,y);
if(Pinta){
puntuacion.setColor(Color::Red);
}
else{
puntuacion.setColor(Color::White);
}}

void Menu::setsalir(int x,int y,char *Fuente,char *Titulo, bool Pinta){

Tipografia.loadFromFile(Fuente);

salir.setFont(Tipografia);
salir.setString(Titulo);
salir.setPosition(x,y);
if(Pinta){
salir.setColor(Color::Red);
}
else{
salir.setColor(Color::White);
}}

Text &Menu::getnuevo(){
return nuevo;
}

Text &Menu::getcontinuar(){
return continuar;
}

Text &Menu::getpuntuacion(){
return puntuacion;
}

Text &Menu::getsalir(){
return salir;
}
