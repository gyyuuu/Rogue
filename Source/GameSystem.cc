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
    
        std::int32_t row = 0;
        std::int32_t column = 0;
        std::int32_t scrrow = 0;
        std::int32_t scrcolumn = 0;
        getmaxyx(stdscr, row, column);
        scrrow = row / 2;
        scrcolumn = ((column - 1) / 2);
        m_dungeon = std::make_unique<rogue::Dungeon>();
        m_hero = std::make_unique<rogue::Hero>(scrrow , scrcolumn, '@');
        m_dungeon->Print();
        m_hero->Print();
    }
    
    GameSystem::~GameSystem() {}
    
    void GameSystem::Loop() { 
        while (true) {
            erase();
            m_dungeon->Print();
            m_hero->Print();
            refresh();
            std::int32_t key = getch();
            if (key == 'q') break;
            m_hero->Move(key);
        }
        endwin();
    }
}
