#include "Character.hpp"
#include <ncurses.h>

namespace character {
    Hero::Hero(std::int32_t x, std::int32_t y, const char symbol) {
       m_entity.m_pos.m_x = x;
       m_entity.m_pos.m_y = y;
       m_entity.m_symbol = symbol;
    }
    
    void Hero::Print() const {
        mvprintw(m_entity.m_pos.m_x, m_entity.m_pos.m_y, &m_entity.m_symbol);
        return;
    }
    
    void Hero::Move(std::int32_t key) {
        switch (key) {
            case KEY_UP: m_entity.m_pos.m_x--; break;
            case KEY_DOWN: m_entity.m_pos.m_x++; break;
            case KEY_LEFT: m_entity.m_pos.m_y--; break;
            case KEY_RIGHT: m_entity.m_pos.m_y++; break;
        }
    }
}
