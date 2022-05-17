#include "Status.hpp"
#include <ncurses.h>
#include <cstdint>

namespace rogue {
Status::Status(){
    m_level = 1;
    m_hitpoint = 20;
    m_attack = 5;
    m_defence = 5;

};

Status::~Status(){};

void Status::Print() const noexcept {
    std::int32_t console_height = 0;
    std::int32_t console_width = 0;
    getmaxyx(stdscr, console_height, console_width);

    mvprintw((console_height - 1), 0, "LV:%d HP:%d ATK:%d DEF:%d", m_level, m_hitpoint, m_attack, m_defence);
};

void Status::LVUp(std::int32_t key) noexcept {
    switch (key)
    {
    case 'U':
        m_level++;
        m_hitpoint++;
        m_attack++;
        m_defence++;
        break;    
    default:
        break;
    }
}
}
