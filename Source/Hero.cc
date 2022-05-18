#include "Hero.hpp"
#include <ncurses.h>
#include <cstdint>

namespace rogue {
    Hero::Hero() {
        std::int32_t console_height = 0;
        std::int32_t console_width = 0;
        getmaxyx(stdscr, console_height, console_width);
        m_position.y = console_height / 2;
        m_position.x = ((console_width - 1) / 2);
        m_symbol = '@';
        m_status = std::make_unique<Status>();
    }
    
    void Hero::Print() const noexcept {
        mvaddch(m_position.y, m_position.x, m_symbol);
    }
    
    void Hero::Move(std::int32_t key) noexcept {
        switch (key) {
            case KEY_UP: 
                m_position.y--; 
                break;
            case KEY_DOWN: 
                m_position.y++;
                break;
            case KEY_LEFT: 
                m_position.x--;
                break;
            case KEY_RIGHT: 
                m_position.x++; 
                break;
        }
    }
}
