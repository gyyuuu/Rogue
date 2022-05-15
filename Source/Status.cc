#include "Status.hpp"

#include "ncurses.h"
namespace rogue {
Status::Status(){
    m_HP = 20;
    m_ATK = 5;
    m_DEF = 5;
    m_LV = 1;
};

Status::~Status(){};

void Status::Print() const noexcept {
    std::int32_t console_height = 0;
    std::int32_t console_width = 0;
    getmaxyx(stdscr, console_height, console_width);

    mvprintw((console_height - 1), 0, "LV:%d HP:%d ATK:%d DEF:%d", m_LV, m_HP, m_ATK, m_DEF);
};

void Status::LVUp(std::int32_t key) noexcept {
    switch (key)
    {
    case 'U':
        m_LV++;
        m_HP++;
        m_ATK++;
        m_DEF++;
        break;    
    default:
        break;
    }
}
}
