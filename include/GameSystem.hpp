#pragma once
#include "Character.hpp"

#include<memory>
#include <ncurses.h>

class GameSystem {
public:
    GameSystem();
    ~GameSystem();
    void Create();

private:
    std::unique_ptr<Character> m_character;
};
