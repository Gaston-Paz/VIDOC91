#include <SFML/Graphics.hpp>
#include "nivel.h"

nivel::nivel(){

}

nivel::nivel(int level){
setfondos1(level);
princi.setEstado(atacando);
princi.setpersonajenivel();
maldito.setmalonivel(level);

setTexturaGolpe();
golpe.scale(1,1);
fuent.loadFromFile("Base05.ttf");

ataque.setFont(fuent);
ataque.setString("ATACAR");
ataque.setPosition(150,575);
ataque.scale(2,2);

defensa.setFont(fuent);
defensa.setString("DEFENDER");
defensa.setPosition(800,575);
defensa.scale(2,2);


}

void nivel::setfondos1(int level){
switch(level){
case 1:
fondo.loadFromFile("nivel1.png");
fondi.setTexture(fondo);
break;

case 2:
fondo.loadFromFile("nivel2.png");
fondi.setTexture(fondo);
break;

case 3:
fondo.loadFromFile("nivel3.png");
fondi.setTexture(fondo);
break;

case 4:
fondo.loadFromFile("nivel4.png");
fondi.setTexture(fondo);
break;

case 5:
fondo.loadFromFile("nivel5.png");
fondi.setTexture(fondo);
break;

}

}

sf::Sprite &nivel::getfondo1(){
return fondi;
}

sf::Sprite& nivel::personajeprincipalnivel(){
return princi.getpersonajenivel();
}

sf::Sprite& nivel::personajemalonivel(){
return maldito.getmalonivel();
}

sf::Text& nivel::getatacar(){
return ataque;
}

sf::Text& nivel::getdefensa(){
return defensa;
}

sf::RectangleShape nivel::getcaja(int caji){
sf::RectangleShape caja(Vector2f(300,80));
caja.setFillColor(sf::Color::Red);
caja.setPosition(130,575);


if(caji == 0){

return caja;
}
if(caji == 1){
caja.setFillColor(sf::Color(155,155,155,255));
return caja;

}
}

sf::RectangleShape nivel::getcajas(int caji){
sf::RectangleShape cajas(Vector2f(400,80));
cajas.setFillColor(sf::Color(155,155,155,255));
cajas.setPosition(770,575);


if(caji == 0){

return cajas;
}
if(caji == 1){
cajas.setFillColor(sf::Color::Red);
return cajas;}
}

Alha& nivel::getpersonaje(){
return princi;
}

enemigo& nivel::getmalo(){
return maldito;
}

void nivel::principalAtaca(int x){

princi.setpersonajenivel();


}

void nivel::setTexturaGolpe(){
pina.loadFromFile("golpes.png");
golpe.setTexture(pina);
}

void nivel::recorteGolpe(int x, int y, bool bandera){
sf::IntRect posicion(160*x,150*y,160,150);
golpe.setTextureRect(posicion);
if(bandera){
   golpe.setPosition(860,200);
}else{
    golpe.setPosition(160,200);
}


}

sf::Sprite& nivel::getSpriteGolpe(){
return golpe;
}

void nivel::setmuerte(bool bandera){
muerte.setTexture(pina);
sf::IntRect posicion(380,300,225,350);
muerte.setTextureRect(posicion);
if(bandera){
muerte.setPosition(800,50);
}else{
muerte.setPosition(100,50);
}
muerte.scale(1.5,1.5);

}

sf::Sprite& nivel::getmuerete(){
return muerte;
}

sf::Text nivel::perdiste(){
return winOlose;


}

void nivel::setMensajeFinal(bool perdio){
if(perdio){
winOlose.setFont(fuent);
winOlose.setString("PERDISTE");
winOlose.scale(3,3);
winOlose.setPosition(400,550);
winOlose.setFillColor(sf::Color::Red);
}else{
winOlose.setFont(fuent);
winOlose.setString("GANASTE");
winOlose.scale(3,3);
winOlose.setPosition(400,550);
winOlose.setFillColor(sf::Color::Green);
}


}



