#ifndef NIVEL_H_INCLUDED
#define NIVEL_H_INCLUDED

class nivel{

private:
int dificultad;
Texture * escena;
Sprite * escenografia;
Texture * barra;
Sprite * salud;

public:
nivel(int difi, int vida);
void setDificultad(int difi);
void setEscenografia();
void setSalud(int vida);
void cargar_imagenes(int difi, int vida);
void imprimir_imagenes();

};

#endif // NIVEL_H_INCLUDED
