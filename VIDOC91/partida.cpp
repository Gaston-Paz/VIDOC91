#include <iostream>
#include "partida.h"


Partida::Partida(){
puntosAcumulados = 0;
}

void Partida::setNivelAlcanzado(int aux){
nivelAlcanzado = aux;
}

void Partida::setPuntosAcumulados(int aux){
puntosAcumulados = aux;
}

int Partida::getNivelAlcanzado(){
return nivelAlcanzado;
}

int Partida::getPuntosAcumulados(){
return puntosAcumulados;
}

bool Partida::leerDeDisco(){
bool leyo = false;
FILE *p = fopen("partida.dat","rb");
if(p == NULL) return leyo;
leyo = fread(this, sizeof(Partida),1,p);
fclose(p);
return leyo;
}

void Partida::guardarEnDisco(){
FILE *p = fopen("partida.dat","wb");
if(p == NULL) return;
fwrite(this, sizeof(Partida),1,p);
fclose(p);
}
