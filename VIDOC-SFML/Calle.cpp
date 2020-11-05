#include <SFML/Graphics.hpp>
#include "Calle.h"
using namespace sf;

void Calle::setcallesita(){

calle1.loadFromFile("calle1.jpg");
carretera1.setTexture(calle1);
carretera1.setPosition(1079,158);

calle2.loadFromFile("calle2.jpg");
carretera2.setTexture(calle2);
carretera2.setPosition(990,247);

calle3.loadFromFile("calle3.jpg");
carretera3.setTexture(calle3);
carretera3.setPosition(990,264);

calle4.loadFromFile("calle4.jpg");
carretera4.setTexture(calle4);
carretera4.setPosition(420,383);

calle5.loadFromFile("calle5.jpg");
carretera5.setTexture(calle5);
carretera5.setPosition(720,288);

calle6.loadFromFile("calle6.jpg");
carretera6.setTexture(calle6);
carretera6.setPosition(379,200);

calle7.loadFromFile("calle7.jpg");
carretera7.setTexture(calle7);
carretera7.setPosition(218,672);

calle8.loadFromFile("calle8.jpg");
carretera8.setTexture(calle8);
carretera8.setPosition(210,640);

calle9.loadFromFile("calle9.jpg");
carretera9.setTexture(calle9);
carretera9.setPosition(420,647);

calle10.loadFromFile("calle10.jpg");
carretera10.setTexture(calle10);
carretera10.setPosition(30,360);
}

Sprite &Calle::getcallesita(){
return carretera1;
}

Sprite &Calle::getcallesita2(){
return carretera2;
}

Sprite &Calle::getcallesita3(){
return carretera3;
}

Sprite &Calle::getcallesita4(){
return carretera4;
}

Sprite &Calle::getcallesita5(){
return carretera5;
}

Sprite &Calle::getcallesita6(){
return carretera6;
}

Sprite &Calle::getcallesita7(){
return carretera7;
}

Sprite &Calle::getcallesita8(){
return carretera8;
}

Sprite &Calle::getcallesita9(){
return carretera9;
}

Sprite &Calle::getcallesita10(){
return carretera10;
}
