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

void puntos::guardarEnDisco(){
FILE *p = fopen("Puntuaciones.dat", "ab");
if(p == NULL)return;
fwrite(this, sizeof(puntos),1,p);
fclose(p);
}
bool puntos::leerDeDisco(int pos){
bool leyo = false;
FILE *p = fopen("Puntuaciones.dat", "rb");
if(p == NULL)return leyo;
fseek(p,sizeof(puntos)*pos,SEEK_SET);
fread(this, sizeof(puntos),1,p);
fclose(p);
return leyo;
}
