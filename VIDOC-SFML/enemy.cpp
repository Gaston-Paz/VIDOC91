#include "enemy.h"
#include "Alha.h"

enemigo::enemigo(){
Salud = 100;
malo.setTexture(personajes);
barraVida.setTexture(vida);
}

enemigo::enemigo(int level){
switch(level){
case 1:
sf::Sprite malo;
malo.setTexture(personajes);
malo.setTextureRect(sf::IntRect(4*47,2*72,47,72));
malo.setPosition(100,120);
malo.scale(sf::Vector2f(5,5));

break;
///case 2:
///break;
///case 3:
///break;
///case 4:
///break;
}


}

sf::Sprite &enemigo::getSprite(){
return malo;
}

void enemigo::setmalonivel(){

sf::IntRect posicion(47,367,45,70);
malo.setTextureRect(posicion);
malo.setPosition(900,155);
malo.scale(5,5);

}

sf::Sprite& enemigo::getmalonivel(){

return malo;

}

int enemigo::getdanio(){
int danio;
setdanio();
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
barraVida.setPosition(700,5);
return barraVida;
}
