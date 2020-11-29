#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "present.h"
#include "Menu.h"
#include "Mapa.h"
#include "Personaje.h"
#include "Alha.h"
#include "nivel.h"
#include "enemy.h"
#include "puntuacion.h"
#include "partida.h"
#include "convert.h"
#include <sstream>

enum ESTADOS_JUEGO{
present,
menu,
mapa,
lucha,
cerrar,
nombrejugador,
guardar
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
    nivel pelea;
    puntos puntua;
    Partida avance;
    Convert conversor;
    unsigned int tics = 0;
    unsigned int tiempojuego = 0;
    unsigned int tiempoAtaque = 0;
    int opcion_menu = 1;
    bool nivelesDesbloqueados[6];

public:
    juego(int );
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
    void imprimirpantallanivel(int a, sf::RenderWindow *window, nivel *pelea, bool turno);
    void imprimirpantallanivel(int a, sf::RenderWindow *window, nivel *pelea);
    void setNivelesDesbloquados();
    void mapas(int *a,sf::RenderWindow *window);
    int buscarNivelAlcanzado();
    void eleccionPartida(int opc);
    void cargarPartida();
    Partida getAvance();

};






#endif // JUEGO_H_INCLUDED
