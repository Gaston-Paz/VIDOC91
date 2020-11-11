#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "present.h"
#include "Menu.h"
#include "Mapa.h"
#include "Personaje.h"
#include "Alha.h"

enum ESTADOS_JUEGO{
present,
menu,
mapa,
nivel,
cerrar
};

class juego{
private:
ESTADOS_JUEGO state;
presentacion inicio;
sf::RenderWindow window;
Menu principal;
Mapa mapi;
Alha actor;
int opcion_menu = 1;
unsigned int tics = 0;

public:
juego();
void gameloop(sf::RenderWindow *window);
void imprimir_menu(sf::RenderWindow *window);
void cmd(sf::RenderWindow *window);
void choisemenu(sf::RenderWindow *window);
void imprimir_mapa(sf::RenderWindow *window);
void cmd(int *x, int *y, sf::Event *event);
void imprimir_todos_los_limites(sf::RenderWindow *window);
bool chequearlimite();
};






#endif // JUEGO_H_INCLUDED
