#pragma once
#include <vector>
#include "Tile.hpp"

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
