#include "GameSystem.hpp"
#include <ncurses.h>
#include <memory>
#include "Hero.hpp"
#include "Monster.hpp"
#include "Status.hpp"

namespace rogue {
GameSystem::GameSystem() {
    initscr();
    cbreak();
    curs_set(0);
    keypad(stdscr, TRUE);
    noecho();
    
    m_dungeon = std::make_unique<Dungeon>();
    m_hero = std::make_unique<Hero>();
    m_monster = std::make_unique<Monster>();
}
    
GameSystem::~GameSystem() {}

void GameSystem::Loop() noexcept { 
    while (true) {
        m_dungeon->Print();
        m_hero->Print();
        m_monster->Print();
        m_hero_status.Print();
        std::int32_t key = getch();
        if (key == 'q') break;
        m_hero->Move(key);
        m_hero_status.LVUp(key);
        refresh();
    }
    endwin();
}
}
