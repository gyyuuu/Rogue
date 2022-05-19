#include "Message.hpp"
#include <ncurses.h>

namespace rogue{
Message::Message() {
    m_position = {0,0};
    m_region = 127;
}
Message::~Message(){};

void Message::Print(std::string message) const noexcept {
    Clear();
    mvaddstr(m_position.y, m_position.x, message.c_str());
};

void Message::Clear() const noexcept {
    for(std::int32_t i = 0; i < m_region; i++) {
        mvaddch(m_position.y, m_position.x + m_region, ' ');
    }
};
}


