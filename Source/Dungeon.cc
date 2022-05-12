#include "Dungeon.hpp"

#include <ncurses.h>
namespace rogue {
Dungeon::Dungeon() {
    m_symbol = "-----------------|¥n";
    m_symbol += "|...............|¥n";
    m_symbol += "+...............|¥n";
    m_symbol += "|...............|¥n";
    m_symbol += "|...............|¥n";
    m_symbol += "-----------------¥n";
}

Dungeon::~Dungeon(){}

void Dungeon::Print() {
        std::int32_t console_height = 0;
        std::int32_t console_width = 0;
        getmaxyx(stdscr, console_height, console_width);
        std::int32_t dungeon_y = (console_height - 7) / 2;
        std::int32_t dungeon_x = (console_width - 18) / 2;
        mvprintw(dungeon_y , dungeon_x, m_symbol.c_str());
    }
}

