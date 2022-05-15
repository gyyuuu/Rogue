#include "Dungeon.hpp"
#include "Position.hpp"

namespace rogue {
Dungeon::Dungeon() {
    Position tile_position = GetCenter();
    for (std::int32_t width = 0; width < 18; width++) {
        m_tiles.emplace_back(tile_position.y, tile_position.x + width, '-');
    }

    m_tiles.emplace_back(tile_position.y + 1, tile_position.x, '|' );
    for (std::int32_t width = 0; width < 18 - 1; width++) {
        m_tiles.emplace_back(tile_position.y + 1, tile_position.x + width, '.');
    }
    m_tiles.emplace_back(tile_position.y + 1, tile_position.x, '|' );
    
    m_tiles.emplace_back(tile_position.y + 1, tile_position.x, '|' );
    for (std::int32_t width = 0; width < 18 - 1; width++) {
        m_tiles.emplace_back(tile_position.y + 2, tile_position.x + width, '.');
    }
    m_tiles.emplace_back(tile_position.y + 2, tile_position.x, '|' );

     m_tiles.emplace_back(tile_position.y + 3, tile_position.x, '+' );
    for (std::int32_t width = 0; width < 18 - 1; width++) {
        m_tiles.emplace_back(tile_position.y + 3, tile_position.x + width, '.');
    }
    m_tiles.emplace_back(tile_position.y + 3, tile_position.x, '|' );

     m_tiles.emplace_back(tile_position.y + 4, tile_position.x, '|' );
    for (std::int32_t width = 0; width < 18 - 1; width++) {
        m_tiles.emplace_back(tile_position.y + 4, tile_position.x + width, '.');
    }
    m_tiles.emplace_back(tile_position.y + 4, tile_position.x, '|' );

     for (std::int32_t width = 0; width < 18; width++) {
        m_tiles.emplace_back(tile_position.y, tile_position.x + width, '-');
    }        
};

Dungeon::~Dungeon(){}

void Dungeon::Print() const noexcept {
    for(auto tile : m_tiles) {
        tile.Print();
    }
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
