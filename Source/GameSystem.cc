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

    std::int32_t console_height = 0;
    std::int32_t console_width = 0;
    getmaxyx(stdscr, console_height, console_width);
    std::int32_t hero_y = console_height / 2;
    std::int32_t hero_x = ((console_width - 1) / 2);
    m_dungeon = std::make_unique<rogue::Dungeon>();
    m_hero = std::make_unique<rogue::Hero>(hero_y , hero_x, '@');
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
