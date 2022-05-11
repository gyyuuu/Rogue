#include "Hero.hpp"
#include <ncurses.h>

namespace rogue {
    Hero::Hero(std::int32_t row, std::int32_t column, const char symbol) {
       m_entity.m_pos.m_row = row;
       m_entity.m_pos.m_column = column;
       m_entity.m_symbol = symbol;
    }
    
    void Hero::Print() const {
        mvprintw(m_entity.m_pos.m_row, m_entity.m_pos.m_column, &m_entity.m_symbol);
    }
    
    void Hero::Move(std::int32_t key) {
        switch (key) {
            case KEY_UP: 
                m_entity.m_pos.m_row--; 
                break;
            case KEY_DOWN: 
                m_entity.m_pos.m_row++;
                break;
            case KEY_LEFT: 
                m_entity.m_pos.m_column--;
                break;
            case KEY_RIGHT: 
                m_entity.m_pos.m_column++; 
                break;
        }
    }
}
