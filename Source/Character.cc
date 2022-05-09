#include "../include/Character.hpp"
#include <ncurses.h>

Character::Character(std::int32_t x, std::int32_t y, const char* aacode) {
   m_entity.m_pos.m_x = x;
   m_entity.m_pos.m_y = y;
   m_entity.m_aacode = aacode;
}

void Character::Print() const {
    mvprintw(m_entity.m_pos.m_x, m_entity.m_pos.m_y, m_entity.m_aacode);
    return;
}
