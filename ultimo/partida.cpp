#include "partida.h"
#include <iostream>

Partida::Partida(){
fondo.loadFromFile("guardar.png");
fon.setTexture(fondo);
setOpciones(1);
fuent.loadFromFile("Base05.ttf");
guardarPartida.scale(2,2);
volver.scale(2,2);
puntosAcumulados = 0;
}

void Partida::setNivelAlcanzado(int aux){
nivelAlcanzado = aux;
}

void Partida::setPuntosAcumulados(int aux){
puntosAcumulados = aux;
}

int Partida::getNivelAlcanzado(){
return nivelAlcanzado;
}

int Partida::getPuntosAcumulados(){
return puntosAcumulados;
}

bool Partida::leerDeDisco(){
bool leyo = false;
FILE *p = fopen("partida.dat","rb");
if(p == NULL) return leyo;
leyo = fread(this, sizeof(Partida),1,p);
fclose(p);
return leyo;
}

void Partida::guardarEnDisco(){
FILE *p = fopen("partida.dat","wb");
if(p == NULL) return;
fwrite(this, sizeof(Partida),1,p);
fclose(p);
}

sf::Sprite& Partida::getSprite(){
return fon;
}

void Partida::setOpciones(int a){
if(a == 1){
guardarPartida.setFont(fuent);
guardarPartida.setString("GUARDAR PARTIDA");
guardarPartida.setPosition(350,200);
guardarPartida.setFillColor(sf::Color::Yellow);

volver.setFont(fuent);
volver.setString("VOLVER AL MAPA");
volver.setFillColor(sf::Color::White);
volver.setPosition(350,400);

}
if(a == 2){
guardarPartida.setFont(fuent);
guardarPartida.setString("GUARDAR PARTIDA");
guardarPartida.setPosition(350,200);
guardarPartida.setFillColor(sf::Color::White);

volver.setFont(fuent);
volver.setString("VOLVER AL MAPA");
volver.setFillColor(sf::Color::Yellow);
volver.setPosition(350,400);

}
if(a == 3){
guardarPartida.setFont(fuent);
guardarPartida.setString("GUARDAR PARTIDA");
guardarPartida.setPosition(350,200);
guardarPartida.setFillColor(sf::Color::Red);

volver.setFont(fuent);
volver.setString("VOLVER AL MAPA");
volver.setFillColor(sf::Color::White);
volver.setPosition(350,400);

}
if(a == 4){
guardarPartida.setFont(fuent);
guardarPartida.setString("GUARDAR PARTIDA");
guardarPartida.setPosition(350,200);
guardarPartida.setFillColor(sf::Color::White);

volver.setFont(fuent);
volver.setString("VOLVER AL MAPA");
volver.setFillColor(sf::Color::Red);
volver.setPosition(350,400);

}
}

sf::Text& Partida::getVolver(){
return volver;
}

sf::Text& Partida::getguardarPartida(){
return guardarPartida;
}

int Partida::seccionPartida(sf::RenderWindow *window){
int a = 1;
while (window->isOpen() && !(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)))
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed){
                 window->close();
            }


            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
                    if(a == 1){
                        a=2;}else{
                    if(a == 2){
                        a=1;}
                        }
                    std::cout<<"arriba"<<std::endl;
                    }


            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
                     if(a == 1){
                        a=2;}else{
                    if(a == 2){
                        a=1;}
                        }
                    std::cout<<"abajo"<<std::endl;

                    }










setOpciones(a);
window->setFramerateLimit(10);
window->clear();
window->draw(getSprite());
window->draw(getguardarPartida());
window->draw(getVolver());
window->display();


}



}

seleccionado(a, window);
return a;
}

void Partida::seleccionado(int a,sf::RenderWindow *window){
while(tics < 20){
if(a == 1){
setOpciones(3);
window->setFramerateLimit(10);
window->clear();
window->draw(getSprite());
window->draw(getguardarPartida());
window->draw(getVolver());
window->display();
}else{
setOpciones(4);
window->setFramerateLimit(10);
window->clear();
window->draw(getSprite());
window->draw(getguardarPartida());
window->draw(getVolver());
window->display();

}

tics++;
}
tics = 0;
}
