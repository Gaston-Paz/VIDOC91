#include "fecha.h"
#include <iostream>
using namespace std;

void Fecha::setFechaMadre(int auxD, int auxM, int auxA){
dia = auxD;
mes = auxM;
anio = auxA;
}
int Fecha::getDia(){
return dia;
}
int Fecha::getMes(){
return mes;
}
int Fecha::getAnio(){
return anio;
}
void Fecha::mostrarFecha(){
cout<<dia<<"/"<<mes<<"/"<<anio<<endl;

}
