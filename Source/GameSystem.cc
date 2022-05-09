#include "../include/Character.hpp"
#include "../include/GameSystem.hpp"

#include <memory>

GameSystem::GameSystem() {
    initscr();
    cbreak();
    curs_set(0);
    std::int32_t row,column;
    std::int32_t x,y;
    getmaxyx(stdscr,row,column);
    y= row/2;
    x = ((column-1)/2);
    m_character = std::make_unique<Character>(y,x,"@");
    m_character->Print();
}

GameSystem::~GameSystem() {}
