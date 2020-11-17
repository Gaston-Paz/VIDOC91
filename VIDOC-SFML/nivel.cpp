#include <SFML/Graphics.hpp>
#include "nivel.h"

nivel::nivel(){

}

nivel::nivel(int level){
setfondos1(level);
princi.setpersonajenivel();
maldito.setmalonivel();

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
///case 2:
///break;
///case 3:
///break;
///case 4:
///break;
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
