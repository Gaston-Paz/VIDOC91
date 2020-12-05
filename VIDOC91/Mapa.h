#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


class Mapa{
private:
    sf::Sprite Map;
    sf::Texture Archivo;
    sf::Music musica;
    sf::Text puntosmapa;
    sf::Font fuentemapa;
    sf::Text nivelmapa;
public:
    Mapa();
    void setmapa();
    sf::Sprite &getmapa();
    sf::Music& getMusica();
    void setpuntosmapa();
    sf::Text &getpuntosmapa();
    sf::Text &getnivelmapa();
    void setnivelmapa();
};

#endif // MAPA_H_INCLUDED
