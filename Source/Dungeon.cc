#include "Dungeon.hpp"

#include <ncurses.h>
namespace rogue {
Dungeon::Dungeon() {
    m_symbol = {
        "-----------------",
        "|...............|",
        "+...............|",
        "|...............|",
        "|...............|",
        "-----------------"
    };
}

void Dungeon::Print() {
        std::int32_t row = 0;
        std::int32_t column = 0;
        std::int32_t scrrow = 0;
        std::int32_t scrcolumn = 0;
        getmaxyx(stdscr, row, column);
        scrrow = row / 2;
        scrcolumn = ((column - 1) / 2);
    for(std::int32_t i = 0; i < DUNGEON_ROW_SIZE; i++) {
        mvprintw(scrrow , scrcolumn, m_symbol[i]);
    }
}
}

