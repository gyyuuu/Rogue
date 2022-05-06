#include "header/Character.hpp"
#include <ncurses.h>

Character::Character(std::int32_t x, std::int32_t y, const char* aacode) {
   m_entity.m_pos.m_x = x;
   m_entity.m_pos.m_y = y;
   m_entity.m_aacode = aacode;
}

void Character::Print() const {
    mvprintw(m_entity.m_pos.m_x, m_entity.m_pos.m_y, m_entity.m_aacode);
}

void Character::Move() {
    std::int32_t key = getch();
	switch (key) {
        if (key == 'q') break;
        case KEY_UP:	m_entity.m_pos.m_y--; break;
        case KEY_DOWN:	m_entity.m_pos.m_y++; break;
        case KEY_LEFT:	m_entity.m_pos.m_x--; break;
        case KEY_RIGHT:	m_entity.m_pos.m_x++; break;
    }
}
