#include "Game.hpp"

Game::Game(int width, int height, const char* title){
    window = new sf::RenderWindow{sf::VideoMode(width,height), title};
};
void Game::run(){
    sf::Event event;
    while(window->isOpen()){
        while(window->pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window->close();
            }
        }
        clear();
        draw();
        display();
    }
};
void Game::clear(){
    window->clear();
};
void Game::draw(){

};
void Game::display(){
    window->display();
};

