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
Prese = new Texture;
Presentacion = new Sprite;
Prese->loadFromFile("fondomenu.png");
Presentacion->setTexture(*Prese);

}

Sprite Menu::getfondo(){
return *Presentacion;

}

void Menu::setnuevo(int x,int y,char *Fuente,char *Titulo, bool Pinta){
Tipografia =  new Font();
Tipografia->loadFromFile(Fuente);

nuevo = new Text;
nuevo->setFont(*Tipografia);
nuevo->setString(Titulo);
nuevo->setPosition(x,y);
if(Pinta){
nuevo->setColor(Color::Red);
}
else{
nuevo->setColor(Color::White);
}}

void Menu::setcontinuar(int x,int y,char *Fuente,char *Titulo, bool Pinta1){
Tipografia =  new Font();
Tipografia->loadFromFile(Fuente);

continuar = new Text;
continuar->setFont(*Tipografia);
continuar->setString(Titulo);
continuar->setPosition(x,y);
if(Pinta1){
nuevo->setColor(Color::Red);
}
else{
nuevo->setColor(Color::White);
}}

void Menu::setpuntuacion(int x,int y,char *Fuente,char *Titulo, bool Pinta2){
Tipografia =  new Font();
Tipografia->loadFromFile(Fuente);

puntuacion = new Text;
puntuacion->setFont(*Tipografia);
puntuacion->setString(Titulo);
puntuacion->setPosition(x,y);
if(Pinta2){
nuevo->setColor(Color::Red);
}
else{
nuevo->setColor(Color::White);
}}

void Menu::setsalir(int x,int y,char *Fuente,char *Titulo, bool Pinta3){
 Tipografia =  new Font();
Tipografia->loadFromFile(Fuente);

salir = new Text;
salir->setFont(*Tipografia);
salir->setString(Titulo);
salir->setPosition(x,y);
if(Pinta3){
nuevo->setColor(Color::Red);
}
else{
nuevo->setColor(Color::White);
}}

Text Menu::getnuevo(){
return *nuevo;
}

Text Menu::getcontinuar(){
return *continuar;
}

Text Menu::getpuntuacion(){
return *puntuacion;
}

Text Menu::getsalir(){
return *salir;
}
