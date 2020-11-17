#include "enemy.h"
#include "Alha.h"

enemigo::enemigo(){
Salud = 100;
malo.setTexture(personajes);
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

