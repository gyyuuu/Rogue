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
<<<<<<< HEAD
    
=======

>>>>>>> feature/collision-detection
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
        //m_hero->Move(key);
        auto hero_position = m_hero->GetPosition();
        if (key == KEY_UP) {
            Position direction_position = {0,-1};
            Position next_position = {0,0};
            next_position.x = hero_position.x + direction_position.x;
            next_position.y = hero_position.y + direction_position.y;
            if (m_dungeon->IsMovable(next_position)) {
                m_hero->Move(key);
            }
        }
        if (key == KEY_DOWN) {
            Position direction_position = {0,1};
            Position next_position = {0,0};
            next_position.x = hero_position.x + direction_position.x;
            next_position.y = hero_position.y + direction_position.y;
            if (m_dungeon->IsMovable(next_position)) {
                m_hero->Move(key);
            }
        }
        if (key == KEY_LEFT) {
            Position direction_position = {-1,0};
            Position next_position = {0,0};
            next_position.x = hero_position.x + direction_position.x;
            next_position.y = hero_position.y + direction_position.y;
            if (m_dungeon->IsMovable(next_position)) {
                m_hero->Move(key);
            }
        }
        if (key == KEY_RIGHT) {
            Position direction_position = {1,0};
            Position next_position = {0,0};
            next_position.x = hero_position.x + direction_position.x;
            next_position.y = hero_position.y + direction_position.y;
            if (m_dungeon->IsMovable(next_position)) {
                m_hero->Move(key);
            }
        }
        m_hero_status.LVUp(key);
        refresh();
    }
    endwin();
}
}
