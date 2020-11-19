#include "puntuacion.h"

puntos::puntos(){
punto = 0;
}

void puntos::setpuntos(int points){
punto += points;
}

int puntos::getpuntos(){
return punto;
}
