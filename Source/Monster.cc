#include "Monster.hpp"
#include <ncurses.h>

namespace rogue {
Monster::Monster(std::int32_t row, std::int32_t column, const char symbol) {
   m_position.y= row;
   m_position.x = column;
   m_symbol = symbol;
};

void Monster::Print() const {
    mvprintw(m_position.y, m_position.x, &m_symbol);
};
}
