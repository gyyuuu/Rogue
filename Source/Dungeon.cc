#include "Dungeon.hpp"
#include <cstdint>
#include "Position.hpp"
#include "TileType.hpp"

namespace rogue {
Dungeon::Dungeon() {
    Position tile_position = GetCenter();
    for (std::int32_t width = 0; width < 19; width++) {
        m_tiles.emplace_back(tile_position, TileType::kTBWall);
        tile_position.x++;
    }
    for(std::int32_t height = 1; height < 6 - 1 ; height++) {
        tile_position = GetCenter();
        tile_position.y = tile_position.y + height;
        if (height == 3) {
            m_tiles.emplace_back(tile_position, TileType::kDoor);
        }else{
            m_tiles.emplace_back(tile_position, TileType::kLRWall);
        }
        for (std::int32_t width = 0; width < 18 - 1; width++) {
            tile_position.x++;
            m_tiles.emplace_back(tile_position, TileType::kFloor);
        }
        tile_position.x++;
        m_tiles.emplace_back(tile_position, TileType::kLRWall);
    }
    tile_position = GetCenter();
    tile_position.y = tile_position.y + 5;
    for (std::int32_t width = 0; width < 19; width++) {
        m_tiles.emplace_back(tile_position, TileType::kTBWall);
        tile_position.x++;
    }
};

Dungeon::~Dungeon(){};

void Dungeon::Print() const noexcept {
    for(const auto& tile : m_tiles) {
        tile.Print();
    }
};

bool Dungeon::IsMovable(Position position) const noexcept {
    for(const auto& tile : m_tiles) {
        if(tile.IsNextPosition(position)) {
            return tile.IsMovable();
        }
    }
    return false;
};

Position Dungeon::GetCenter() const noexcept {
    Position center_position = {0,0};
    std::int32_t console_height = 0;
    std::int32_t console_width = 0;
    getmaxyx(stdscr, console_height, console_width);
    center_position.y = (console_height - 7) / 2;
    center_position.x = ((console_width - 18) / 2);
    return center_position;
};
}
