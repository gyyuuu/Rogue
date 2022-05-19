#pragma once
#include <cstdint>
#include "Position"

namespace rogue {
class TileType
{
public:
    enum Type{kLRwall, kTBwall, kdoor, kfloor, ktypemax};
    TileType(Type type);
    ~TileType();
    void Ride();
    void Leave();
    bool IsMovable(){};
    void Print(Position position);

private:
    const Type m_type;
    bool m_isriding;
    const std::array<char, ktypemax>
};
}
