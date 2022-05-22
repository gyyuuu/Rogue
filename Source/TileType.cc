#include "TileType.hpp"
#include <ncurses.h>
#include "Position.hpp"


/*実装中*/
namespace rogue {
TileType::TileType(Type type) :
    m_type(type),
    m_isriding(false),
    m_symbols({'|', '-', '+', '.'}){}

TileType::~TileType(){}

void TileType::Ride() {
    m_isriding = true;
};

void TileType::Leave() {
    m_isriding = false;
};

bool TileType::IsMovable() const noexcept {
    if((m_type == kFloor) || (m_type == kDoor)) {
        return true;
    }
    return false;
}

void TileType::Print(Position position) const noexcept {
    mvaddch(position.y, position.x, m_symbols[m_type]);
}

}

