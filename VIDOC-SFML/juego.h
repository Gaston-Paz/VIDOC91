#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "present.h"
#include "Menu.h"
#include "Mapa.h"
#include "Personaje.h"
#include "Alha.h"
#include "nivel.h"
#include "enemy.h"

enum ESTADOS_JUEGO{
present,
menu,
mapa,
lucha,
cerrar
};

class juego{
private:
ESTADOS_JUEGO state;
presentacion inicio;
sf::RenderWindow window;
Menu principal;
Mapa mapi;
Personaje perso;
enemigo malote;
Alha actor;
int opcion_menu = 1;
unsigned int tics = 0;
unsigned int tiempojuego = 0;
nivel pelea;
unsigned int tiempoAtaque = 0;

public:
juego();
void gameloop(sf::RenderWindow *window);
void imprimir_menu(sf::RenderWindow *window);
void cmd(sf::RenderWindow *window);
void choisemenu(sf::RenderWindow *window);
void imprimir_mapa(sf::RenderWindow *window);
void cmd(int *x, int *y, sf::Event *event);
bool chequearlimite();
int verificaringresonivel();
void eleccionDeNivel(int level, sf::RenderWindow *window);
void principalAtaca();
void imprimirpantallanivel(int a, sf::RenderWindow *window, nivel *pelea);

};






#endif // JUEGO_H_INCLUDED
