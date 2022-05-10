#include "Character.hpp"
#include "GameSystem.hpp"

#include <memory>
#include <ncurses.h>
namespace rogue {
    GameSystem::GameSystem() {
        initscr();
        cbreak();
        curs_set(0);
        keypad(stdscr, TRUE);
    
        std::int32_t row;
        std::int32_t column;
        std::int32_t x;
        std::int32_t y;
        getmaxyx(stdscr, row, column);
        y= row/2;
        x = ((column-1)/2);
        m_hero = std::make_unique<character::Hero>(y, x, '@');
        m_hero->Print();
    }
    
    GameSystem::~GameSystem() {}
    
    void GameSystem::Loop() { 
        while (true) {
            erase();
            m_hero->Print();
            refresh();
            std::int32_t key = getch();
            if (key == 'q') break;
            m_hero->Move(key);
        }
        endwin();
    }
}
