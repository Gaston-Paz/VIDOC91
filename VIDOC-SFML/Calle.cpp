#include <SFML/Graphics.hpp>
#include "Calle.h"
using namespace sf;

void Calle::setcallesita(){
calle1 = new Texture;
carretera1 = new Sprite;
calle1->loadFromFile("calle1.jpg");
carretera1->setTexture(*calle1);
carretera1->setPosition(1041,150);

}

Sprite &Calle::getcallesita(){
return *carretera1;
}



void Calle::setcallesita2(){
calle2 = new Texture;
carretera2 = new Sprite;
calle2->loadFromFile("calle2.jpg");
carretera2->setTexture(*calle2);
carretera2->setPosition(950,215);

}

Sprite &Calle::getcallesita2(){
return *carretera2;
}

void Calle::setcallesita3(){
calle3 = new Texture;
carretera3 = new Sprite;
calle3->loadFromFile("calle3.jpg");
carretera3->setTexture(*calle3);
carretera3->setPosition(950,215);

}

Sprite &Calle::getcallesita3(){
return *carretera3;
}

void Calle::setcallesita4(){
calle4 = new Texture;
carretera4 = new Sprite;
calle4->loadFromFile("calle4.jpg");
carretera4->setTexture(*calle4);
carretera4->setPosition(30,359);

}

Sprite &Calle::getcallesita4(){
return *carretera4;
}

void Calle::setcallesita5(){
calle5 = new Texture;
carretera5 = new Sprite;
calle5->loadFromFile("calle5.jpg");
carretera5->setTexture(*calle5);
carretera5->setPosition(680,280);

}

Sprite &Calle::getcallesita5(){
return *carretera5;
}

void Calle::setcallesita6(){
calle6 = new Texture;
carretera6 = new Sprite;
calle6->loadFromFile("calle6.jpg");
carretera6->setTexture(*calle6);
carretera6->setPosition(340,190);

}

Sprite &Calle::getcallesita6(){
return *carretera6;
}

void Calle::setcallesita7(){
calle7 = new Texture;
carretera7 = new Sprite;
calle7->loadFromFile("calle7.jpg");
carretera7->setTexture(*calle7);
carretera7->setPosition(170,618);

}

Sprite &Calle::getcallesita7(){
return *carretera7;
}

void Calle::setcallesita8(){
calle8 = new Texture;
carretera8 = new Sprite;
calle8->loadFromFile("calle8.jpg");
carretera8->setTexture(*calle8);
carretera8->setPosition(420,616);

}

Sprite &Calle::getcallesita8(){
return *carretera8;
}
