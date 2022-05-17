#include "Monster.hpp"
#include <ncurses.h>

namespace rogue {
Monster::Monster() {
    std::int32_t console_height = 0;
    std::int32_t console_width = 0;
    getmaxyx(stdscr, console_height, console_width);
    m_position.y = ((console_height - 7) / 2) + 1;
    m_position.x = ((console_width - 18) / 2) + 1;
    m_symbol ='M';
};

void Monster::Print() const {
    mvaddch(m_position.y, m_position.x, m_symbol);
};
}
