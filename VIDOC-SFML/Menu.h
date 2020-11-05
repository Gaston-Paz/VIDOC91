#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <SFML/Graphics.hpp>
using namespace sf;
class Menu{
private:
int Opciones;
Text nuevo;
Text continuar;
Text puntuacion;
Text salir;
Font Tipografia;
Texture Prese;
Sprite Presentacion;
public:

void setopciones(int);
void setopcionesataques(int);
void setnuevo(int x,int y,char *Fuente,char *Titulo,bool Pinta);
void setcontinuar(int x,int y,char *Fuente,char *Titulo,bool Pinta);
void setpuntuacion(int x,int y,char *Fuente,char *Titulo,bool Pinta);
void setsalir(int x,int y,char *Fuente,char *Titulo,bool Pinta);
Text &setleyenda(int,int,char *,char *,char *);
void setfondomenu();
Text &getleyenda();
Sprite &getfondomenu();
void setvector(Text *, int);
Text &getnuevo();
Text &getcontinuar();
Text &getpuntuacion();
Text &getsalir();
};

#endif // MENU_H_INCLUDED
