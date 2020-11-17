#include <SFML/Graphics.hpp>
#include "juego.h"
#include "present.h"
#include "Menu.h"
#include "Mapa.h"
#include "Personaje.h"
#include "Alha.h"
#include "nivel.h"
#include <iostream>

juego::juego(){

    state = present;
    sf::RenderWindow window(sf::VideoMode(1280, 720), "VIDOC 91");
    window.setFramerateLimit(60);
    int x = 0, y = 0;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed){
                 window.close();
            }
            if(event.key.code == sf::Keyboard::Right){
                actor.setEstado(camina_derecha);
                y = 2;
                if(x > 2){x = 0;}
                actor.setpersonajeimagen(x*47,y*72,47,72);
                if(chequearlimite()){
                   actor.getpersonaje().move(4,0);
                }

                x++;

            }
            if(event.key.code == sf::Keyboard::Left){
                actor.setEstado(camina_izquierda);
                y = 1;
                if(x > 2){x = 0;}
                actor.setpersonajeimagen(x*47,y*72,47,72);
                if(chequearlimite()){
                   actor.getpersonaje().move(-4,0);
                }
                x++;

            }
            if(event.key.code == sf::Keyboard::Up){
                    actor.setEstado(camina_arriba);
                    y = 3;
                    if(x > 2){x = 0;}
                    actor.setpersonajeimagen(x*47,y*72,47,72);
                    if(chequearlimite()){
                       actor.getpersonaje().move(0,-4);
                    }
                    x++;

                }
            if(event.key.code == sf::Keyboard::Down){
                    actor.setEstado(camina_abajo);
                    y = 0;
                    if(x > 2){x = 0;}
                    actor.setpersonajeimagen(x*47,y*72,47,72);
                    if(chequearlimite()){
                       actor.getpersonaje().move(0,4);
                    }
                    x++;

                }



        }

    gameloop(&window);



    if(state == cerrar){
    break;
    }
    }


}

void juego::gameloop(sf::RenderWindow *window){
int a;
if(state == present){
while(tics < 180){
inicio.setlogo();
window->clear();
window->draw(inicio.getlogo());
window->display();
tics++;
}
state = menu;
}
if(state == menu){
    imprimir_menu(window);
    cmd(window);
    choisemenu(window);
}
if(state == mapa){
  imprimir_mapa(window);
a = verificaringresonivel();
}
if(state == lucha){
eleccionDeNivel(a , window);


}
}

void juego::imprimir_menu(sf::RenderWindow *window){
window->clear();
window->draw(principal.getfondomenu());
window->draw(principal.getnuevo());
window->draw(principal.getcontinuar());
window->draw(principal.getpuntuacion());
window->draw(principal.getsalir());
window->display();
}

void juego::cmd(sf::RenderWindow *window){
if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
    if(opcion_menu == 1){
        principal.setopcion(300,100,"Base05.ttf","JUEGO NUEVO", false, 0);
        principal.setopcion(300,200,"Base05.ttf", "CONTINUAR PARTIDA", false, 1);
        principal.setopcion(300,300,"Base05.ttf", "PUNTUACIONES", false, 2);
        principal.setopcion(300,400,"Base05.ttf", "SALIR DEL JUEGO", true, 3);
        opcion_menu = 4;
    }else{if(opcion_menu == 2){
        principal.setopcion(300,100,"Base05.ttf","JUEGO NUEVO", true, 0);
        principal.setopcion(300,200,"Base05.ttf", "CONTINUAR PARTIDA", false, 1);
        principal.setopcion(300,300,"Base05.ttf", "PUNTUACIONES", false, 2);
        principal.setopcion(300,400,"Base05.ttf", "SALIR DEL JUEGO", false, 3);
        opcion_menu = 1;
    }else{if(opcion_menu == 3){
        principal.setopcion(300,100,"Base05.ttf","JUEGO NUEVO", false, 0);
        principal.setopcion(300,200,"Base05.ttf", "CONTINUAR PARTIDA", true, 1);
        principal.setopcion(300,300,"Base05.ttf", "PUNTUACIONES", false, 2);
        principal.setopcion(300,400,"Base05.ttf", "SALIR DEL JUEGO", false, 3);
        opcion_menu = 2;
    }else{if(opcion_menu == 4){
        principal.setopcion(300,100,"Base05.ttf","JUEGO NUEVO", false, 0);
        principal.setopcion(300,200,"Base05.ttf", "CONTINUAR PARTIDA", false, 1);
        principal.setopcion(300,300,"Base05.ttf", "PUNTUACIONES", true, 2);
        principal.setopcion(300,400,"Base05.ttf", "SALIR DEL JUEGO", false, 3);
        opcion_menu = 3;
    }
    }
    }
    }
}

if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
    if(opcion_menu == 1){
        principal.setopcion(300,100,"Base05.ttf","JUEGO NUEVO", false, 0);
        principal.setopcion(300,200,"Base05.ttf", "CONTINUAR PARTIDA", true, 1);
        principal.setopcion(300,300,"Base05.ttf", "PUNTUACIONES", false, 2);
        principal.setopcion(300,400,"Base05.ttf", "SALIR DEL JUEGO", false, 3);
        opcion_menu = 2;
    }else{if(opcion_menu == 2){
        principal.setopcion(300,100,"Base05.ttf","JUEGO NUEVO", false, 0);
        principal.setopcion(300,200,"Base05.ttf", "CONTINUAR PARTIDA", false, 1);
        principal.setopcion(300,300,"Base05.ttf", "PUNTUACIONES", true, 2);
        principal.setopcion(300,400,"Base05.ttf", "SALIR DEL JUEGO", false, 3);
        opcion_menu = 3;
    }else{if(opcion_menu == 3){
        principal.setopcion(300,100,"Base05.ttf","JUEGO NUEVO", false, 0);
        principal.setopcion(300,200,"Base05.ttf", "CONTINUAR PARTIDA", false, 1);
        principal.setopcion(300,300,"Base05.ttf", "PUNTUACIONES", false, 2);
        principal.setopcion(300,400,"Base05.ttf", "SALIR DEL JUEGO", true, 3);
        opcion_menu = 4;
    }else{if(opcion_menu == 4){
        principal.setopcion(300,100,"Base05.ttf","JUEGO NUEVO", true, 0);
        principal.setopcion(300,200,"Base05.ttf", "CONTINUAR PARTIDA", false, 1);
        principal.setopcion(300,300,"Base05.ttf", "PUNTUACIONES", false, 2);
        principal.setopcion(300,400,"Base05.ttf", "SALIR DEL JUEGO", false, 3);
        opcion_menu = 1;
    }
    }
    }
    }
}



}

void juego::choisemenu(sf::RenderWindow *window){

if(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)){
    switch(opcion_menu){
        case 1:
        state =  mapa;
        break;
        /*case 1:
        break;
        case 1:
        break;
        */
        case 4:
        state = cerrar;
        break;



    }
}


}

void juego::imprimir_mapa(sf::RenderWindow *window){

window->clear();
window->draw(mapi.getmapa());
window->draw(actor.getpersonaje());
window->display();

if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
    state = menu;
}


}

void juego::cmd(int *x, int *y, sf::Event *event){
if(event->key.code == sf::Keyboard::Right){
        *y = 2;
        *x++;
        if(*x > 8){*x = 0;}
        actor.setpersonajeimagen(*x*51,*y*77,60,60);


    }
if(event->key.code == sf::Keyboard::Left){
        *y = 1;
        if(*x > 8){*x = 0;}
        actor.setpersonajeimagen(*x*51,*y*79,60,60);
        x++;

    }

if(event->key.code == sf::Keyboard::Up){
        *y = 3;
        if(*x > 8){*x = 0;}
        actor.setpersonajeimagen(*x*51,*y*75,60,60);
        *x++;

    }

if(event->key.code == sf::Keyboard::Down){
        *y = 0;
        if(*x > 8){*x = 0;}
        actor.setpersonajeimagen(*x*51,*y*77,60,65);
        *x++;

    }


}

bool juego::chequearlimite(){

if(actor.getEstado() == camina_derecha){
if((actor.getpersonaje().getGlobalBounds().left + actor.getpersonaje().getGlobalBounds().width +1 == 428) &&
     (actor.getpersonaje().getPosition().y >= 100 && actor.getpersonaje().getPosition().y <= 334)){return false;}

if((actor.getpersonaje().getGlobalBounds().left + actor.getpersonaje().getGlobalBounds().width +1 == 776) &&
     (actor.getpersonaje().getPosition().y >= 230 && actor.getpersonaje().getPosition().y <= 338)){return false;}

if((actor.getpersonaje().getGlobalBounds().left + actor.getpersonaje().getGlobalBounds().width +1 == 1128) &&
     (actor.getpersonaje().getPosition().y >= 90 && actor.getpersonaje().getPosition().y <= 236)){return false;}

if((actor.getpersonaje().getGlobalBounds().left + actor.getpersonaje().getGlobalBounds().width +1 == 1036) &&
     (actor.getpersonaje().getPosition().y >= 212 && actor.getpersonaje().getPosition().y <= 350)){return false;}

if((actor.getpersonaje().getGlobalBounds().left + actor.getpersonaje().getGlobalBounds().width +1 == 428) &&
     (actor.getpersonaje().getPosition().y >= 350 && actor.getpersonaje().getPosition().y <= 590)){return false;}

if((actor.getpersonaje().getGlobalBounds().left + actor.getpersonaje().getGlobalBounds().width +1 == 1128) &&
     (actor.getpersonaje().getPosition().y >= 590 && actor.getpersonaje().getPosition().y <= 720)){return false;}

if((actor.getpersonaje().getGlobalBounds().left + actor.getpersonaje().getGlobalBounds().width +1 == 368) &&
    (actor.getpersonaje().getPosition().y >= 620 && actor.getpersonaje().getPosition().y <= 720)){return false;}

return true;
}

if(actor.getEstado() == camina_izquierda){
if((actor.getpersonaje().getGlobalBounds().left == 332) &&
    (actor.getpersonaje().getPosition().y >= 116 && actor.getpersonaje().getPosition().y <= 328)){return false;}

if((actor.getpersonaje().getGlobalBounds().left == 680) &&
    (actor.getpersonaje().getPosition().y >= 206 && actor.getpersonaje().getPosition().y <= 336)){return false;}

if((actor.getpersonaje().getGlobalBounds().left == 944) &&
    (actor.getpersonaje().getPosition().y >= 140 && actor.getpersonaje().getPosition().y <= 336)){return false;}

if((actor.getpersonaje().getGlobalBounds().left == 1032) &&
    (actor.getpersonaje().getPosition().y >= 76 && actor.getpersonaje().getPosition().y <= 200)){return false;}

if((actor.getpersonaje().getGlobalBounds().left == 160) &&
    (actor.getpersonaje().getPosition().y >= 550 && actor.getpersonaje().getPosition().y <= 720)){return false;}

if((actor.getpersonaje().getGlobalBounds().left == 332) &&
    (actor.getpersonaje().getPosition().y >= 353 && actor.getpersonaje().getPosition().y <= 616)){return false;}

if((actor.getpersonaje().getGlobalBounds().left == 32) &&
    (actor.getpersonaje().getPosition().y >= 288 && actor.getpersonaje().getPosition().y <= 412)){return false;}

return true;
}

if(actor.getEstado() == camina_abajo){
if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 424) &&
    (actor.getpersonaje().getPosition().x >= 10 && actor.getpersonaje().getPosition().x <= 330)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 700) &&
    (actor.getpersonaje().getPosition().x >= 150 && actor.getpersonaje().getPosition().x <= 458)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 680) &&
    (actor.getpersonaje().getPosition().x >= 408 && actor.getpersonaje().getPosition().x <= 1158)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 424) &&
    (actor.getpersonaje().getPosition().x >= 408 && actor.getpersonaje().getPosition().x <= 1068)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 284) &&
    (actor.getpersonaje().getPosition().x >= 1018 && actor.getpersonaje().getPosition().x <= 1158)){return false;}

return true;}

if(actor.getEstado() == camina_arriba){
if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 200) &&
    (actor.getpersonaje().getPosition().x >= 320 && actor.getpersonaje().getPosition().x <= 460)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 348) &&
    (actor.getpersonaje().getPosition().x >= 408 && actor.getpersonaje().getPosition().x <= 688)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 280) &&
    (actor.getpersonaje().getPosition().x >= 638 && actor.getpersonaje().getPosition().x <= 778)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 348) &&
    (actor.getpersonaje().getPosition().x >= 728 && actor.getpersonaje().getPosition().x <= 978)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 216) &&
    (actor.getpersonaje().getPosition().x >= 928 && actor.getpersonaje().getPosition().x <= 1018)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 160) &&
    (actor.getpersonaje().getPosition().x >= 1018 && actor.getpersonaje().getPosition().x <= 1158)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 612) &&
    (actor.getpersonaje().getPosition().x >= 408 && actor.getpersonaje().getPosition().x <= 1158)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 624) &&
    (actor.getpersonaje().getPosition().x >= 240 && actor.getpersonaje().getPosition().x <= 291)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 624) &&
    (actor.getpersonaje().getPosition().x >= 150 && actor.getpersonaje().getPosition().x <= 240)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 640) &&
    (actor.getpersonaje().getPosition().x >= 240 && actor.getpersonaje().getPosition().x <= 330)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 364) &&
    (actor.getpersonaje().getPosition().x >= 0 && actor.getpersonaje().getPosition().x <= 370)){return false;}

return true;}

}

int juego::verificaringresonivel(){
int b = 0;

if((actor.getpersonaje().getPosition().x >= 700 && actor.getpersonaje().getPosition().x <= 740)
   && (actor.getpersonaje().getPosition().y >= 150 && actor.getpersonaje().getPosition().y <= 280)
   && (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))){
    ///INGRESO A NIVEL 1
    std::cout<<"NIVEL 1"<<std::endl;
    state = lucha;
    b = 1;
}
if((actor.getpersonaje().getPosition().x >= 355 && actor.getpersonaje().getPosition().x <= 405)
   && (actor.getpersonaje().getPosition().y >= 100 && actor.getpersonaje().getPosition().y <= 192)
   && (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))){
    ///INGRESO A NIVEL 2
    std::cout<<"NIVEL 2"<<std::endl;
    state = lucha;
    b = 2;
}
if((actor.getpersonaje().getPosition().x >= 55 && actor.getpersonaje().getPosition().x <= 100)
   && (actor.getpersonaje().getPosition().y >= 280 && actor.getpersonaje().getPosition().y <= 360)
   && (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))){
    ///INGRESO A NIVEL 3
    std::cout<<"NIVEL 3"<<std::endl;
    state = lucha;
    b = 3;
}
if((actor.getpersonaje().getPosition().x >= 192 && actor.getpersonaje().getPosition().x <= 232)
   && (actor.getpersonaje().getPosition().y >= 525 && actor.getpersonaje().getPosition().y <= 615)
   && (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))){
    ///INGRESO A NIVEL 4
    std::cout<<"NIVEL 4"<<std::endl;
    state = lucha;
    b = 4;
}
if((actor.getpersonaje().getPosition().x >= 1065 && actor.getpersonaje().getPosition().x <= 1125)
   && (actor.getpersonaje().getPosition().y >= 505 && actor.getpersonaje().getPosition().y <= 615)
   && (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))){
    ///INGRESO A CURACION
    std::cout<<"NIVEL 5"<<std::endl;
    state = lucha;
    b = 5;
}
return b;
}

void juego::eleccionDeNivel(int level, sf::RenderWindow *window){
nivel pelea(level);
int a = 0;
actor.setEstado(atacando);

    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed){
                 window->close();
            }

        }



    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
            a = 0;
    }
    if(actor.getsalud() < 30){
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
            a = 1;
    }
    }


    ///BAJAMOS VIDA A MALO
    if(a == 0 && sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && actor.getEstado() == atacando){
        std::cout<<"SALUD MALO"<<std::endl;
        std::cout<<malote.getsalud()<<std::endl;
        malote.bajar_salud(actor.getdanio());
        std::cout<<malote.getsalud()<<std::endl<<std::endl;
        actor.setEstado(esperando);
        malote.setEstado(ataque);

    }
    ///BAJAMOS VIDA A PRINCIPAL
    if(malote.getEstado() == ataque){
        std::cout<<"SALUD MIA"<<std::endl;
        std::cout<<actor.getsalud()<<std::endl;
        actor.bajar_salud(malote.getdanio());
        std::cout<<actor.getsalud()<<std::endl<<std::endl;
        malote.setEstado(espera);
        actor.setEstado(atacando);
        }




window->clear();
window->draw(pelea.getfondo1());
window->draw(pelea.personajeprincipalnivel());
window->draw(pelea.personajemalonivel());
window->draw(pelea.getcaja(a));
window->draw(pelea.getcajas(a));
window->draw(pelea.getdefensa());
window->draw(pelea.getatacar());
window->display();


}

}








