#include "Hero.hpp"
#include "Monster.hpp"
#include "GameSystem.hpp"
#include "Status.hpp"

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
    std::int32_t monster_y = ((console_height - 7) / 2) + 1;
    std::int32_t monster_x = ((console_width - 18) / 2) + 1;

    m_dungeon = std::make_unique<rogue::Dungeon>();
    m_hero = std::make_unique<rogue::Hero>(hero_y , hero_x, '@', m_hero_status);
    m_monster = std::make_unique<rogue::Monster>(monster_y , monster_x, 'M');
    m_dungeon->Print();
    m_hero->Print();
    m_hero_status.Print();
}
    
GameSystem::~GameSystem() {}

void GameSystem::Loop() { 
    while (true) {
        erase();
        m_dungeon->Print();
        m_hero->Print();
        m_monster->Print();
        m_hero_status.Print();
        refresh();
        std::int32_t key = getch();
        if (key == 'q') break;
        m_hero->Move(key);
    }
    endwin();
}
}
