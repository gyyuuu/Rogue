#include "Message.hpp"
#include <ncurses.h>

namespace rogue{
Message::Message() {
    m_position = {0,0};
    std::int32_t console_height = 0;
    std::int32_t console_width = 0;
    getmaxyx(stdscr, console_height, console_width);
    m_area = (console_width / 2);
}
Message::~Message(){};

void Message::Print(std::string message) const noexcept {
    Clear();
    mvaddstr(m_position.y, m_position.x, message.c_str());
};

void Message::Clear() const noexcept {
    for(std::int32_t i = 0; i < m_area; i++) {
        mvaddch(m_position.y, m_position.x + m_area, ' ');
    }
};
}


