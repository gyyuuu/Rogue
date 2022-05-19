#include "TileType.hpp"
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
}

