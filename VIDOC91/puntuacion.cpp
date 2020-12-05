#include "puntuacion.h"

puntos::puntos(){
punto = 0;
}

void puntos::setAgregaPuntos(int points){
punto += points;
}

void puntos::setPuntos(int points){
punto = points;
}

int puntos::getpuntos(){
return punto;
}
