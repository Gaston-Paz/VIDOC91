#include <SFML/Graphics.hpp>
#include "juego.h"
#include "nivel.h"
#include <iostream>
using namespace sf;

juego::juego(int x, int y, char * titulo){
crear_pantalla(x,y,titulo);
cargar_imagenes();
presentacionJuego();
ciclo();

}

void juego::imprimir_pantalla(){
pantalla->display();
pantalla->clear();
}

void juego::imprimir_fondo(){
pantalla->draw(*mapa);
pantalla->draw(*personaje);
}

void juego::ciclo(){
nivel * level;
mover = new Event;

while(pantalla->isOpen()){
    moverlo();
    imprimir_pantalla();
    imprimir_fondo();

    if(Keyboard::isKeyPressed(Keyboard::Escape)){
    while(!Keyboard::isKeyPressed(Keyboard::Down)){
    level = new nivel(1,100);
    pantalla->clear();
    pantalla->draw(level->getEscenografia());
    pantalla->display();
    }
    break;
    }
}
}

void juego::moverlo(){
while(pantalla->pollEvent(*mover)){
    switch(mover->type){
    case Event::Closed:
    pantalla->close();
    exit(1);
    break;


case Event::KeyPressed:
    if (Keyboard::isKeyPressed(Keyboard::Right)){
        personaje->setPosition(personaje->getPosition().x + 10 ,personaje->getPosition().y);
    }
    if (Keyboard::isKeyPressed(Keyboard::Left)){
    personaje->setPosition(personaje->getPosition().x - 10 ,personaje->getPosition().y);
    }
          if (Keyboard::isKeyPressed(Keyboard::Up)){
    personaje->setPosition(personaje->getPosition().x ,personaje->getPosition().y - 10);
    }
          if (Keyboard::isKeyPressed(Keyboard::Down)){
    personaje->setPosition(personaje->getPosition().x ,personaje->getPosition().y + 10);
    };

}
}
}

void juego::presentacionJuego(){

while(!Keyboard::isKeyPressed(Keyboard::Up)){
pantalla->clear();
logo->setPosition(0,0);
pantalla->draw(*logo);
pantalla->display();
}


while(!Keyboard::isKeyPressed(Keyboard::Enter)){
pantalla->clear();
pantalla->draw(*presentacion);
pantalla->draw(*juegoNuevo);
pantalla->draw(*continuarPartida);
pantalla->draw(*puntuaciones);
pantalla->draw(*salir);
pantalla->display();
///pintar_menu();

}

}

void juego::cargar_imagenes(){
fondo = new Texture;
mapa = new Sprite;
fondo->loadFromFile("mapa.png");
mapa->setTexture(*fondo);

perso = new Texture;
personaje = new Sprite;
perso->loadFromFile("loqui.png");
personaje->setTexture(*perso);

prese = new Texture;
presentacion = new Sprite;
prese->loadFromFile("menu.png");
presentacion->setTexture(*prese);

log = new Texture;
logo = new Sprite;
log->loadFromFile("calavera.png");
logo->setTexture(*log);

fuente =  new Font();
fuente->loadFromFile("Base05.ttf");

juegoNuevo = new Text();
juegoNuevo->setFont(*fuente);
juegoNuevo->setString("JUEGO NUEVO");
juegoNuevo->setPosition(200,75);
juegoNuevo->setColor(Color::Black);

continuarPartida = new Text();
continuarPartida->setFont(*fuente);
continuarPartida->setString("CONTINUAR PARTIDA");
continuarPartida->setPosition(200,150);
continuarPartida->setColor(Color::Black);

puntuaciones = new Text();
puntuaciones->setFont(*fuente);
puntuaciones->setString("PUNTUACIONES");
puntuaciones->setPosition(200,225);
puntuaciones->setColor(Color::Black);

salir = new Text();
salir->setFont(*fuente);
salir->setString("SALIR DEL JUEGO");
salir->setPosition(200,300);
salir->setColor(Color::Black);

}

void juego::crear_pantalla(int tamanio_x, int tamanio_y, char *titulo){
pantalla = new RenderWindow(sf::VideoMode(tamanio_x,tamanio_y), titulo);
}

void juego::pintar_menu(){
int x = 1;
while(true){
if(Keyboard::isKeyPressed(Keyboard::Enter)){
break;
}

if(Keyboard::isKeyPressed(Keyboard::Up)){
switch(x){
case 1:
salir->setColor(Color::White);
juegoNuevo->setColor(Color::Red);
puntuaciones->setColor(Color::Red);
continuarPartida->setColor(Color::Red);
x = 4;
break;

case 2:
juegoNuevo->setColor(Color::White);
continuarPartida->setColor(Color::Red);
puntuaciones->setColor(Color::Red);
salir->setColor(Color::Red);
x = 1;
break;

case 3:
juegoNuevo->setColor(Color::Red);
continuarPartida->setColor(Color::White);
puntuaciones->setColor(Color::Red);
salir->setColor(Color::Red);
x = 2;
break;

case 4:
juegoNuevo->setColor(Color::Red);
continuarPartida->setColor(Color::Red);
puntuaciones->setColor(Color::White);
salir->setColor(Color::Red);
x = 3;
break;
}
}

else{
if(Keyboard::isKeyPressed(Keyboard::Down)){
switch(x){
case 1:
juegoNuevo->setColor(Color::Red);
continuarPartida->setColor(Color::White);
puntuaciones->setColor(Color::Red);
salir->setColor(Color::Red);
x = 2;
break;

case 2:
juegoNuevo->setColor(Color::Red);
continuarPartida->setColor(Color::Red);
puntuaciones->setColor(Color::White);
salir->setColor(Color::Red);
x = 3;
break;

case 3:
juegoNuevo->setColor(Color::Red);
continuarPartida->setColor(Color::Red);
puntuaciones->setColor(Color::Red);
salir->setColor(Color::White);
x = 4;
break;

case 4:
juegoNuevo->setColor(Color::White);
continuarPartida->setColor(Color::Red);
puntuaciones->setColor(Color::Red);
salir->setColor(Color::Red);
x = 1;
break;
}

}

}


pantalla->clear();
pantalla->draw(*presentacion);
pantalla->draw(*juegoNuevo);
pantalla->draw(*continuarPartida);
pantalla->draw(*puntuaciones);
pantalla->draw(*salir);
pantalla->display();

}



}


