#include <SFML/Graphics.hpp>
#include "juego.h"
#include "Presentacion.h"
#include "Menu.h"
#include "Mapa.h"
#include "Alha.h"
#include "Casa.h"
#include "Calle.h"
#include <iostream>
using namespace sf;

void juego::ciclo(Mapa *Mapita){
mover = new Event;
Alha *Munieco;
Munieco = new Alha;
Casa *casucha;
casucha = new Casa;
casucha->setcasita();
Calle *callesita1;
callesita1 = new Calle;
callesita1->setcallesita();
callesita1->setcallesita2();
callesita1->setcallesita3();
callesita1->setcallesita4();
callesita1->setcallesita5();
callesita1->setcallesita6();
callesita1->setcallesita7();
callesita1->setcallesita8();
callesita1->setcallesita9();
callesita1->setcallesita10();
Munieco->setpersonajeimagen(1050,150);

while(pantalla->isOpen()){
    pantalla->clear();
    caminar(Munieco);
    entrarNivel(casucha, Munieco);
    nosalircalle(callesita1,Munieco);
    pantalla->draw(Mapita->getmapa());
    pantalla->draw(casucha->getcasita());
    pantalla->draw(callesita1->getcallesita());
    pantalla->draw(callesita1->getcallesita2());
    pantalla->draw(callesita1->getcallesita3());
    pantalla->draw(callesita1->getcallesita4());
    pantalla->draw(callesita1->getcallesita5());
    pantalla->draw(callesita1->getcallesita6());
    pantalla->draw(callesita1->getcallesita7());
    pantalla->draw(callesita1->getcallesita8());
    pantalla->draw(callesita1->getcallesita9());
    pantalla->draw(callesita1->getcallesita10());
    pantalla->draw(Munieco->getpersonaje());
    pantalla->display();
    if(Keyboard::isKeyPressed(Keyboard::Escape)){
    break;
    }
}
}

void juego::presentacionJuego(){

int Tics = 0;
Presentacion *Logo;
Logo = new Presentacion;
Logo->setpresentacion();
while(Tics<100){
pantalla->clear();
pantalla->draw(Logo->getpresentacion());
pantalla->display();
Tics++;
}


}

void juego::crear_pantalla(int tamanio_x, int tamanio_y, char *titulo){
pantalla = new RenderWindow(sf::VideoMode(tamanio_x,tamanio_y), titulo);
pantalla->setFramerateLimit(60);
}

void juego::imprimir_menu(){
mover_menu = new Event;
Menu *Principal;
int variable =1;
Principal = new Menu;
Principal->setnuevo(250,125,"Base05.ttf","JUEGO NUEVO",true);
Principal->setcontinuar(250,200,"Base05.ttf","CONTINUAR JUEGO",false);
Principal->setpuntuacion(250,275,"Base05.ttf","PUNTUACION",false);
Principal->setsalir(250,350,"Base05.ttf","SALIR DEL JUEGO",false);
Principal->setfondomenu();

while(!Keyboard::isKeyPressed(Keyboard::Enter)){
funciones_menu(Principal);
movimiento_menu(Principal, &variable);
}
variable_valor(&variable);
}

void juego::funciones_menu(Menu *Principal){
pantalla->clear();
pantalla->draw(Principal->getfondomenu());
pantalla->draw(Principal->getnuevo());
pantalla->draw(Principal->getcontinuar());
pantalla->draw(Principal->getpuntuacion());
pantalla->draw(Principal->getsalir());
pantalla->display();
}

void juego::movimiento_menu(Menu *Principal, int *variable){

while(pantalla->pollEvent(*mover_menu)){
switch(mover_menu->type){
case Event::Closed:
    pantalla->close();
    exit(1);
    break;


case Event::KeyPressed:
if(Keyboard::isKeyPressed(Keyboard::Up)){
switch(*variable){
case 1:
    *variable = 4;
Principal->setnuevo(250,125,"Base05.ttf","JUEGO NUEVO",false);
Principal->setcontinuar(250,200,"Base05.ttf","CONTINUAR JUEGO",false);
Principal->setpuntuacion(250,275,"Base05.ttf","PUNTUACION",false);
Principal->setsalir(250,350,"Base05.ttf","SALIR DEL JUEGO",true);
    break;
case 2:
    *variable = 1;
Principal->setnuevo(250,125,"Base05.ttf","JUEGO NUEVO",true);
Principal->setcontinuar(250,200,"Base05.ttf","CONTINUAR JUEGO",false);
Principal->setpuntuacion(250,275,"Base05.ttf","PUNTUACION",false);
Principal->setsalir(250,350,"Base05.ttf","SALIR DEL JUEGO",false);
    break;
case 3:
    *variable = 2;
Principal->setnuevo(250,125,"Base05.ttf","JUEGO NUEVO",false);
Principal->setcontinuar(250,200,"Base05.ttf","CONTINUAR JUEGO",true);
Principal->setpuntuacion(250,275,"Base05.ttf","PUNTUACION",false);
Principal->setsalir(250,350,"Base05.ttf","SALIR DEL JUEGO",false);
    break;
case 4:
    *variable =3;
Principal->setnuevo(250,125,"Base05.ttf","JUEGO NUEVO",false);
Principal->setcontinuar(250,200,"Base05.ttf","CONTINUAR JUEGO",false);
Principal->setpuntuacion(250,275,"Base05.ttf","PUNTUACION",true);
Principal->setsalir(250,350,"Base05.ttf","SALIR DEL JUEGO",false);
    break;
    }}
    if(Keyboard::isKeyPressed(Keyboard::Down)){
switch(*variable){
case 1:
    *variable = 2;
Principal->setnuevo(250,125,"Base05.ttf","JUEGO NUEVO",false);
Principal->setcontinuar(250,200,"Base05.ttf","CONTINUAR JUEGO",true);
Principal->setpuntuacion(250,275,"Base05.ttf","PUNTUACION",false);
Principal->setsalir(250,350,"Base05.ttf","SALIR DEL JUEGO",false);
    break;
case 2:
    *variable = 3;
Principal->setnuevo(250,125,"Base05.ttf","JUEGO NUEVO",false);
Principal->setcontinuar(250,200,"Base05.ttf","CONTINUAR JUEGO",false);
Principal->setpuntuacion(250,275,"Base05.ttf","PUNTUACION",true);
Principal->setsalir(250,350,"Base05.ttf","SALIR DEL JUEGO",false);
    break;
case 3:
    *variable = 4;
Principal->setnuevo(250,125,"Base05.ttf","JUEGO NUEVO",false);
Principal->setcontinuar(250,200,"Base05.ttf","CONTINUAR JUEGO",false);
Principal->setpuntuacion(250,275,"Base05.ttf","PUNTUACION",false);
Principal->setsalir(250,350,"Base05.ttf","SALIR DEL JUEGO",true);
    break;
case 4:
    *variable =1;
Principal->setnuevo(250,125,"Base05.ttf","JUEGO NUEVO",true);
Principal->setcontinuar(250,200,"Base05.ttf","CONTINUAR JUEGO",false);
Principal->setpuntuacion(250,275,"Base05.ttf","PUNTUACION",false);
Principal->setsalir(250,350,"Base05.ttf","SALIR DEL JUEGO",false);
    break;
    }}}}}

void juego::variable_valor(int *variable){
Mapa *Mapita;
Mapita = new Mapa;
switch(*variable){
case 1:

Mapita->setmapa();
ciclo(Mapita);

break;
/*
case 2:

break;
case 3:

break;
*/
case 4:
return;
break;

}}

void juego::caminar(Alha *Munieco){

while(pantalla->pollEvent(*mover)){
switch(mover->type){
case Event::Closed:
    pantalla->close();
    exit(1);
    break;


case Event::KeyPressed:
    if (Keyboard::isKeyPressed(Keyboard::Right)){
    Munieco->setpersonajeimagende(Munieco->posicionpersonajex() + 10,Munieco->posicionpersonajey());
    }
    if (Keyboard::isKeyPressed(Keyboard::Left)){
    Munieco->setpersonajeimageniz(Munieco->posicionpersonajex() - 10,Munieco->posicionpersonajey());
    }
    if (Keyboard::isKeyPressed(Keyboard::Up)){
    Munieco->setpersonajeimagenat(Munieco->posicionpersonajex() ,Munieco->posicionpersonajey()-10);
    }
    if (Keyboard::isKeyPressed(Keyboard::Down)){
    Munieco->setpersonajeimagen(Munieco->posicionpersonajex() ,Munieco->posicionpersonajey()+ 10);
    };

}
}
}


void juego::entrarNivel(Casa *casucha, Alha *Munieco){

if(casucha->getcasita().getGlobalBounds().intersects(Munieco->getpersonaje().getGlobalBounds())){
   std::cout<<"Holi";

   }


}

void juego::nosalircalle(Calle *callesita1, Alha *Munieco){

while(!((callesita1->getcallesita().getGlobalBounds().intersects(Munieco->getpersonaje().getGlobalBounds()))     ||
            (callesita1->getcallesita2().getGlobalBounds().intersects(Munieco->getpersonaje().getGlobalBounds()))   ||
            (callesita1->getcallesita3().getGlobalBounds().intersects(Munieco->getpersonaje().getGlobalBounds()))     ||
            (callesita1->getcallesita4().getGlobalBounds().intersects(Munieco->getpersonaje().getGlobalBounds()))     ||
            (callesita1->getcallesita5().getGlobalBounds().intersects(Munieco->getpersonaje().getGlobalBounds()))     ||
            (callesita1->getcallesita6().getGlobalBounds().intersects(Munieco->getpersonaje().getGlobalBounds()))     ||
            (callesita1->getcallesita7().getGlobalBounds().intersects(Munieco->getpersonaje().getGlobalBounds()))     ||
            (callesita1->getcallesita8().getGlobalBounds().intersects(Munieco->getpersonaje().getGlobalBounds()))     ||
            (callesita1->getcallesita9().getGlobalBounds().intersects(Munieco->getpersonaje().getGlobalBounds()))     ||
            (callesita1->getcallesita10().getGlobalBounds().intersects(Munieco->getpersonaje().getGlobalBounds()))     )){
switch(mover->type){
case Event::KeyPressed:
    if (Keyboard::isKeyPressed(Keyboard::Right)){
    Munieco->setpersonajeimagende(Munieco->posicionpersonajex() - 10,Munieco->posicionpersonajey());
    }
        if(Keyboard::isKeyPressed(Keyboard::Left)){
    Munieco->setpersonajeimageniz(Munieco->posicionpersonajex() +10 ,Munieco->posicionpersonajey());
    }
          if (Keyboard::isKeyPressed(Keyboard::Up)){
    Munieco->setpersonajeimagenat(Munieco->posicionpersonajex() ,Munieco->posicionpersonajey()+10);
    }
          if (Keyboard::isKeyPressed(Keyboard::Down)){
    Munieco->setpersonajeimagen(Munieco->posicionpersonajex() ,Munieco->posicionpersonajey()- 10);
    };
   }



}}

