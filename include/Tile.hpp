#pragma once
#include <ncurses.h>
#include <cstdint>
#include "Position.hpp"

namespace rogue{
class Tile {
public:
    Tile(std::int32_t y, std::int32_t x, char m_symbol);
    Tile(const Tile& tile);
    ~Tile();
    void Print() const noexcept;
private:
    Position m_position;
    char m_symbol;
};
}
