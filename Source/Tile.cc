#include "Tile.hpp"
#include <cstdint>

namespace rogue {
Tile::Tile(Position position, TileType type){
    /* 実装中 */
    m_position.y = y;
    m_position.x = x;
    m_symbol = symbol;
};

Tile::Tile(const Tile& tile) {
    m_position.y = tile.m_position.y;
    m_position.x = tile.m_position.x;
    m_symbol = tile.m_symbol;
};

Tile::~Tile(){};

void Tile::Print() const noexcept {
    mvaddch(m_position.y, m_position.x, m_symbol);
};
}
