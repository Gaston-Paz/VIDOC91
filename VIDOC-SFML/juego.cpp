#include <SFML/Graphics.hpp>
#include "juego.h"
#include "nivel.h"
using namespace sf;

void juego::imprimir_pantalla(){
pantalla->display();
pantalla->clear();
}

void juego::imprimir_fondo(){
pantalla->draw(*mapa);
pantalla->draw(*personaje);
}

void juego::ciclo(){
mover = new Event;
while(pantalla->isOpen()){
    moverlo();
    imprimir_pantalla();
    imprimir_fondo();
    if(Keyboard::isKeyPressed(Keyboard::Enter)){
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

while(!Keyboard::isKeyPressed(Keyboard::Enter)){
pantalla->clear();
logo->setPosition(100, -200);
pantalla->draw(*logo);
pantalla->display();
}



while(!Keyboard::isKeyPressed(Keyboard::Up)){
pantalla->clear();
pantalla->draw(*presentacion);
pantalla->draw(*leyenda);
pantalla->display();
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
prese->loadFromFile("presentacion.png");
presentacion->setTexture(*prese);

log = new Texture;
logo = new Sprite;
log->loadFromFile("Logo1.png");
logo->setTexture(*log);

fuente =  new Font();
fuente->loadFromFile("fuente.ttf");

leyenda = new Text();
leyenda->setFont(*fuente);
leyenda->setString("JUEGO NUEVO");
leyenda->setPosition(100,100);
leyenda->setColor(Color::Red);
}

void juego::crear_pantalla(int tamanio_x, int tamanio_y, char *titulo){
pantalla = new RenderWindow(sf::VideoMode(tamanio_x,tamanio_y), titulo);
}
