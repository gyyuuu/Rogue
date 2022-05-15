#include "Hero.hpp"
#include <ncurses.h>

namespace rogue {
    Hero::Hero(std::int32_t row, std::int32_t column, const char symbol, Status status) {
        m_position.y= row;
        m_position.x = column;
        m_symbol = symbol;
        m_status = status;
    }
    
    void Hero::Print() const {
        mvprintw(m_position.y, m_position.x, &m_symbol);
    }
    
    void Hero::Move(std::int32_t key) {
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
