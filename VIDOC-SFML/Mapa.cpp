#include <SFML/Graphics.hpp>
#include "Mapa.h"

Mapa::Mapa(){
setmapa();
limite limit;
cargar_limites();
}

void Mapa::setmapa(){
Archivo.loadFromFile("MAPADEFINITIVO.png");
Map.setTexture(Archivo);
}

sf::Sprite& Mapa::getmapa(){
return Map;
}

void Mapa::dibujar_limites(sf::RenderWindow *window,int x, int y, int a, int b, int p){
window->draw(limit[p].getlimite(x,y,a,b));
}

sf::RectangleShape Mapa::getlimite(int x){
return limit[x].lim;
}

void Mapa::cargar_limites(){
limit[0].setearlimite(1,65,30,360);
limit[1].setearlimite(340,1,30,360);
limit[2].setearlimite(340,1,30,425);
limit[3].setearlimite(1,210,370,425);
limit[4].setearlimite(80,1,290,635);
limit[5].setearlimite(1,12,290,623);
limit[6].setearlimite(90,1,200,623);
limit[7].setearlimite(1,77,200,623);
limit[8].setearlimite(258,1,200,700);
limit[9].setearlimite(1,18,458,682);
limit[10].setearlimite(700,1,458,682);
limit[11].setearlimite(1,68,1158,614);
limit[12].setearlimite(700,1,458,614);
limit[13].setearlimite(1,192,458,422);
limit[14].setearlimite(610,1,458,422);
limit[15].setearlimite(1,138,1068,284);
limit[16].setearlimite(90,1,1068,284);
limit[17].setearlimite(1,136,1158,148);
limit[18].setearlimite(90,1,1068,148);
limit[19].setearlimite(1,64,1068,148);
limit[20].setearlimite(90,1,978,212);
limit[21].setearlimite(1,136,978,212);
limit[22].setearlimite(200,1,778,348);
limit[23].setearlimite(1,70,778,278);
limit[24].setearlimite(90,1,688,278);
limit[25].setearlimite(1,70,688,278);
limit[26].setearlimite(230,1,458,348);
limit[27].setearlimite(1,160,458,188);
limit[28].setearlimite(1,172,370,188);
limit[29].setearlimite(90,1,370,188);
}

