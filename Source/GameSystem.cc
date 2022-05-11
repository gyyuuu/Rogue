#include "Hero.hpp"
#include "GameSystem.hpp"

#include <memory>
#include <ncurses.h>
namespace rogue {
    GameSystem::GameSystem() {
        initscr();
        cbreak();
        curs_set(0);
        keypad(stdscr, TRUE);
    
        std::int32_t scrrow = 0;
        std::int32_t scrcolumn = 0;
        std::int32_t row = 0;
        std::int32_t column = 0;
        getmaxyx(stdscr, scrrow, scrcolumn);
        row = scrrow / 2;
        column = ((scrcolumn - 1) / 2);
        m_hero = std::make_unique<rogue::Hero>(row , column, '@');
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
