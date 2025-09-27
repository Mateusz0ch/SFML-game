#include <SFML/Graphics.hpp>

class Game{
    sf::RenderWindow* window;
    public:
        Game(int width, int height,const char* title);
        void run();
        void draw();
        void clear();
        void display();
};