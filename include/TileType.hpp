#pragma once
#include <cstdint>
#include <array>
#include "Position.hpp"

namespace rogue {
class TileType
{
public:
    enum Type{kLRWall, kTBWall, kDoor, kFloor, kTypeMax};
    TileType(Type type);
    ~TileType();
    void Ride();
    void Leave();
    bool IsMovable() const noexcept;
    void Print(Position position) const noexcept;

private:
    const Type m_type;
    bool m_isriding;
    const std::array<char, kTypeMax> m_symbols;
};
}
