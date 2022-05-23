#pragma once
#include <ncurses.h>
#include <cstdint>
#include "Position.hpp"
#include "TileType.hpp"

namespace rogue{
class Tile {
public:
    Tile(Position position, TileType type);
    ~Tile();
    void Print() const noexcept;
    bool IsMovable() const noexcept;
    bool IsNextPosition(Position position) const noexcept;
private:
    Position m_position;
    TileType m_type;
};
}
