#pragma once
#include "Position.hpp"
#include "Status.hpp"
#include <cstdint>

namespace rogue {
class Hero {
public:
    Hero(std::int32_t hero_y, std::int32_t hero_x, const char symbol, Status status);
    void Print() const;
    void Move(std::int32_t key);

private:
    Position m_position;
    char m_symbol;
    Status m_status;
};
}
