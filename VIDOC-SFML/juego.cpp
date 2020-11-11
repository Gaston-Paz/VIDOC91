#include <SFML/Graphics.hpp>
#include "juego.h"
#include "present.h"
#include "Menu.h"
#include "Mapa.h"
#include "Personaje.h"
#include "Alha.h"
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
                   actor.getpersonaje().move(1,0);
                }

                x++;

            }
            if(event.key.code == sf::Keyboard::Left){
                actor.setEstado(camina_izquierda);
                y = 1;
                if(x > 2){x = 0;}
                actor.setpersonajeimagen(x*47,y*72,47,72);
                if(chequearlimite()){
                   actor.getpersonaje().move(-1,0);
                }
                x++;

            }

        if(event.key.code == sf::Keyboard::Up){
                actor.setEstado(camina_arriba);
                y = 3;
                if(x > 2){x = 0;}
                actor.setpersonajeimagen(x*47,y*72,47,72);
                if(chequearlimite()){
                   actor.getpersonaje().move(0,-1);
                }
                x++;

            }

        if(event.key.code == sf::Keyboard::Down){
                actor.setEstado(camina_abajo);
                y = 0;
                if(x > 2){x = 0;}
                actor.setpersonajeimagen(x*47,y*72,47,72);
                if(chequearlimite()){
                   actor.getpersonaje().move(0,1);
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

void juego::imprimir_todos_los_limites(sf::RenderWindow *window){
mapi.dibujar_limites(window,1,65,30,360,0);///izquierda
mapi.dibujar_limites(window,340,1,30,360,1);
mapi.dibujar_limites(window,340,1,30,425,2);///abajo
mapi.dibujar_limites(window,1,210,370,425,3);///izquierda
mapi.dibujar_limites(window,80,1,290,635,4);

mapi.dibujar_limites(window,1,12,290,623,5);
mapi.dibujar_limites(window,90,1,200,623,6);
mapi.dibujar_limites(window,1,77,200,623,7);///izquierda
mapi.dibujar_limites(window,258,1,200,700,8);///abajo
mapi.dibujar_limites(window,1,18,458,682,9); ///derecha

mapi.dibujar_limites(window,700,1,458,682,10);///abajo
mapi.dibujar_limites(window,1,68,1158,614,11);///derecha
mapi.dibujar_limites(window,700,1,458,614,12);
mapi.dibujar_limites(window,1,192,458,422,13);///derecha
mapi.dibujar_limites(window,610,1,458,422,14);///abajo

mapi.dibujar_limites(window,1,138,1068,284,15);///derecha
mapi.dibujar_limites(window,90,1,1068,284,16);///abajo
mapi.dibujar_limites(window,1,136,1158,148,17);///derecha
mapi.dibujar_limites(window,90,1,1068,148,18);
mapi.dibujar_limites(window,1,64,1068,148,19);///izquierda


mapi.dibujar_limites(window,90,1,978,212,20);
mapi.dibujar_limites(window,1,136,978,212,21);///izquierda
mapi.dibujar_limites(window,200,1,778,348,22);
mapi.dibujar_limites(window,1,70,778,278,23);///derecha
mapi.dibujar_limites(window,90,1,688,278,24);

mapi.dibujar_limites(window,1,70,688,278,25);///izquierda
mapi.dibujar_limites(window,230,1,458,348,26);
mapi.dibujar_limites(window,1,160,458,188,27);///derecha
mapi.dibujar_limites(window,1,172,370,188,28);///izquierda
mapi.dibujar_limites(window,90,1,370,188,29);




}

bool juego::chequearlimite(){

if(actor.getEstado() == camina_derecha){
if((actor.getpersonaje().getGlobalBounds().left + actor.getpersonaje().getGlobalBounds().width == 458) &&
     (actor.getpersonaje().getPosition().y >= 100 && actor.getpersonaje().getPosition().y <= 334)){return false;}

if((actor.getpersonaje().getGlobalBounds().left + actor.getpersonaje().getGlobalBounds().width == 778) &&
     (actor.getpersonaje().getPosition().y >= 230 && actor.getpersonaje().getPosition().y <= 338)){return false;}

if((actor.getpersonaje().getGlobalBounds().left + actor.getpersonaje().getGlobalBounds().width == 1158) &&
     (actor.getpersonaje().getPosition().y >= 90 && actor.getpersonaje().getPosition().y <= 236)){return false;}

if((actor.getpersonaje().getGlobalBounds().left + actor.getpersonaje().getGlobalBounds().width == 1068) &&
     (actor.getpersonaje().getPosition().y >= 212 && actor.getpersonaje().getPosition().y <= 350)){return false;}

if((actor.getpersonaje().getGlobalBounds().left + actor.getpersonaje().getGlobalBounds().width == 458) &&
     (actor.getpersonaje().getPosition().y >= 350 && actor.getpersonaje().getPosition().y <= 590)){return false;}

if((actor.getpersonaje().getGlobalBounds().left + actor.getpersonaje().getGlobalBounds().width == 1158) &&
     (actor.getpersonaje().getPosition().y >= 590 && actor.getpersonaje().getPosition().y <= 720)){return false;}

if((actor.getpersonaje().getGlobalBounds().left + actor.getpersonaje().getGlobalBounds().width == 458) &&
    (actor.getpersonaje().getPosition().y >= 620 && actor.getpersonaje().getPosition().y <= 720)){return false;}

return true;
}

if(actor.getEstado() == camina_izquierda){
if((actor.getpersonaje().getGlobalBounds().left == 370) &&
    (actor.getpersonaje().getPosition().y >= 116 && actor.getpersonaje().getPosition().y <= 328)){return false;}

if((actor.getpersonaje().getGlobalBounds().left == 688) &&
    (actor.getpersonaje().getPosition().y >= 206 && actor.getpersonaje().getPosition().y <= 336)){return false;}

if((actor.getpersonaje().getGlobalBounds().left == 978) &&
    (actor.getpersonaje().getPosition().y >= 140 && actor.getpersonaje().getPosition().y <= 336)){return false;}

if((actor.getpersonaje().getGlobalBounds().left == 1068) &&
    (actor.getpersonaje().getPosition().y >= 76 && actor.getpersonaje().getPosition().y <= 200)){return false;}

if((actor.getpersonaje().getGlobalBounds().left == 200) &&
    (actor.getpersonaje().getPosition().y >= 550 && actor.getpersonaje().getPosition().y <= 720)){return false;}

if((actor.getpersonaje().getGlobalBounds().left == 370) &&
    (actor.getpersonaje().getPosition().y >= 353 && actor.getpersonaje().getPosition().y <= 615)){return false;}

if((actor.getpersonaje().getGlobalBounds().left == 30) &&
    (actor.getpersonaje().getPosition().y >= 288 && actor.getpersonaje().getPosition().y <= 410)){return false;}

return true;
}

if(actor.getEstado() == camina_abajo){
if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 425) &&
    (actor.getpersonaje().getPosition().x >= 10 && actor.getpersonaje().getPosition().x <= 370)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 700) &&
    (actor.getpersonaje().getPosition().x >= 150 && actor.getpersonaje().getPosition().x <= 458)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 682) &&
    (actor.getpersonaje().getPosition().x >= 408 && actor.getpersonaje().getPosition().x <= 1158)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 422) &&
    (actor.getpersonaje().getPosition().x >= 408 && actor.getpersonaje().getPosition().x <= 1068)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 284) &&
    (actor.getpersonaje().getPosition().x >= 1018 && actor.getpersonaje().getPosition().x <= 1158)){return false;}

return true;}

if(actor.getEstado() == camina_arriba){
if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 188) &&
    (actor.getpersonaje().getPosition().x >= 320 && actor.getpersonaje().getPosition().x <= 460)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 348) &&
    (actor.getpersonaje().getPosition().x >= 408 && actor.getpersonaje().getPosition().x <= 688)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 278) &&
    (actor.getpersonaje().getPosition().x >= 638 && actor.getpersonaje().getPosition().x <= 778)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 348) &&
    (actor.getpersonaje().getPosition().x >= 728 && actor.getpersonaje().getPosition().x <= 978)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 212) &&
    (actor.getpersonaje().getPosition().x >= 928 && actor.getpersonaje().getPosition().x <= 1068)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 148) &&
    (actor.getpersonaje().getPosition().x >= 1018 && actor.getpersonaje().getPosition().x <= 1158)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 614) &&
    (actor.getpersonaje().getPosition().x >= 408 && actor.getpersonaje().getPosition().x <= 1158)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 623) &&
    (actor.getpersonaje().getPosition().x >= 240 && actor.getpersonaje().getPosition().x <= 291)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 623) &&
    (actor.getpersonaje().getPosition().x >= 150 && actor.getpersonaje().getPosition().x <= 290)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 635) &&
    (actor.getpersonaje().getPosition().x >= 240 && actor.getpersonaje().getPosition().x <= 370)){return false;}

if((actor.getpersonaje().getGlobalBounds().top + actor.getpersonaje().getGlobalBounds().height == 360) &&
    (actor.getpersonaje().getPosition().x >= 0 && actor.getpersonaje().getPosition().x <= 370)){return false;}

return true;}

}












