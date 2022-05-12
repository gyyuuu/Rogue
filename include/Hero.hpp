#pragma once
#include "Position.hpp"

#include <cstdint>

namespace rogue {
class Hero {
public:
    Hero(std::int32_t hero_y, std::int32_t hero_x, const char symbol);
    void Print() const;
    void Move(std::int32_t key);

private:
    Position m_position;
    char m_symbol;
};
}
