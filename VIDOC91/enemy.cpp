#include "enemy.h"
#include "Alha.h"

enemigo::enemigo(){
Salud = 100;
malo.setTexture(personajes);
barraVida.setTexture(vida);
}

sf::Sprite &enemigo::getSprite(){
return malo;
}

void enemigo::setmalonivel(int level){

if(level == 1){
sf::IntRect posicion(47,367,45,70);
malo.setTextureRect(posicion);
malo.setPosition(900,155);
malo.scale(5,5);

}

if(level == 2){
sf::IntRect posicion(4*47,72,45,70);
malo.setTextureRect(posicion);
malo.setPosition(900,125);
malo.scale(5,5);
}

if(level == 3){
sf::IntRect posicion(7*47,367,45,70);
malo.setTextureRect(posicion);
malo.setPosition(900,155);
malo.scale(5,5);
}

if(level == 4){
sf::IntRect posicion(4*47,367,45,70);
malo.setTextureRect(posicion);
malo.setPosition(900,155);
malo.scale(5,5);

}
if(level == 5){
sf::IntRect posicion(9*47,367,45,70);
malo.setTextureRect(posicion);
malo.setPosition(900,155);
malo.scale(5,5);

}

}

sf::Sprite& enemigo::getmalonivel(){
return malo;
}

int enemigo::getdanio(int level){
int danio;
setdanio();

switch(level){
case 1:
switch(Tipo_ataque){
case 1:
danio = 5;
break;
case 2:
danio = 10;
break;
case 3:
danio = 15;
break;
case 4:
danio = 20;
break;
}
break;

case 2:
switch(Tipo_ataque){
case 1:
danio = 7;
break;
case 2:
danio = 12;
break;
case 3:
danio = 17;
break;
case 4:
danio = 25;
break;
}

break;

case 3:

switch(Tipo_ataque){
case 1:
danio = 10;
break;
case 2:
danio = 15;
break;
case 3:
danio = 20;
break;
case 4:
danio = 22;
break;
}

break;

case 4:
switch(Tipo_ataque){
case 1:
danio = 12;
break;
case 2:
danio = 15;
break;
case 3:
danio = 20;
break;
case 4:
danio = 24;
break;
}


break;

case 5:
switch(Tipo_ataque){
case 1:
danio = 15;
break;
case 2:
danio = 17;
break;
case 3:
danio = 20;
break;
case 4:
danio = 30;
break;
}


break;



}
return danio;
}

void enemigo::setdanio(){
Tipo_ataque = rand()%4+1;
}

ESTADO_ENEMY enemigo::getEstado(){
return movimieto;
}

void enemigo::setEstado(ESTADO_ENEMY actual){
movimieto = actual;
}

sf::Sprite& enemigo::getbarraVida(int vida){
int a;
if(vida <= 100 && vida >= 90){
    a = 0;
}else{
if(vida < 90 && vida >= 70){
    a = 1;
}else{
if(vida < 70 && vida >= 50){
    a = 2;
}else{
if(vida < 50 && vida >= 30){
    a = 3;
}else{
if(vida < 30){
    a = 4;
}
}
}
}
}
sf::IntRect recorte(0,a*98,470,98);
barraVida.setTextureRect(recorte);
barraVida.setPosition(750,5);
return barraVida;
}

void enemigo::setpersonajeMuevenivel(int x, int level){
if(level == 1){
sf::IntRect posicion(x*47,367,45,70);
malo.setTextureRect(posicion);
malo.setPosition(900,155);

if(malo.getPosition().x + malo.getGlobalBounds().left > 190){
    malo.move(-600,0);

}

}

if(level == 2){
sf::IntRect posicion((x*47)+150,80,45,70);
malo.setTextureRect(posicion);
malo.setPosition(900,155);

if(malo.getPosition().x + malo.getGlobalBounds().left > 190){
    malo.move(-600,0);

}

}

if(level == 3){
sf::IntRect posicion((x*47)+290,367,45,70);
malo.setTextureRect(posicion);
malo.setPosition(900,155);

if(malo.getPosition().x + malo.getGlobalBounds().left > 190){
    malo.move(-600,0);

}

}

if(level == 4){
sf::IntRect posicion((x*47)+142,367,45,70);
malo.setTextureRect(posicion);
malo.setPosition(900,155);

if(malo.getPosition().x + malo.getGlobalBounds().left > 190){
    malo.move(-600,0);

}

}

if(level == 5){
sf::IntRect posicion((x*47)+430,367,45,70);
malo.setTextureRect(posicion);
malo.setPosition(900,155);

if(malo.getPosition().x + malo.getGlobalBounds().left > 190){
    malo.move(-600,0);

}

}





}


