#pragma once
#include "Position.hpp"

#include <cstdint>

namespace rogue {
class Monster{
public:
    Monster(std::int32_t monster_y, std::int32_t monster_x, const char symbol);
    void Print() const;
    void Move(std::int32_t key);

private:
    Position m_position;
    char m_symbol;
};
}
