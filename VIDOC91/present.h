#ifndef PRESENT_H_INCLUDED
#define PRESENT_H_INCLUDED
#include <SFML/Graphics.hpp>

class presentacion{
private:
    sf::Texture presenta;
    sf::Sprite logo;

public:
    void setlogo();
    sf::Sprite& getlogo();

};


#endif // PRESENT_H_INCLUDED
