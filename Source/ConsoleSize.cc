#include "ConsoleSize.hpp"

#include <ncurses.h>
namespace rogue {
ConsoleSize::ConsoleSize() {
    getmaxyx(stdscr, m_height, m_width);
}

const Position ConsoleSize::GetCenter() const noexcept {
    return {(m_width - 1 / 2), (m_height / 2)};
}
}
