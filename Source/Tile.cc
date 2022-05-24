#include "Tile.hpp"
#include <ncurses.h>
#include <cstdint>
#include "TileType.hpp"

namespace rogue {
Tile::Tile(Position position, TileType type)
    : m_position(position)
    , m_type(type){};

Tile::~Tile(){};

void Tile::Print() const noexcept {
    m_type.Print(m_position);
};

bool Tile::IsMovable() const noexcept {
    return m_type.IsMovable();
};

bool Tile::IsNextPosition(Position position) const noexcept {
    if (m_position == position) {
        return true;
    }
    return false;
}
};

