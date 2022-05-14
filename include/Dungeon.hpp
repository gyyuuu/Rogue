#pragma once
#include "Tile.hpp"

#include <cstdint>
#include <string>
#include <vector>

namespace rogue {
class Dungeon {
public:
    Dungeon();
    ~Dungeon();
    void Print() const noexcept;
private:
    std::vector<Tile> m_tiles;
    Position GetCenter() const noexcept;
};
}
