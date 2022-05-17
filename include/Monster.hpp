#pragma once
#include <cstdint>
#include "Position.hpp"

namespace rogue {
class Monster{
public:
    Monster();
    void Print() const;
    void Move(std::int32_t key);

private:
    Position m_position;
    char m_symbol;
};
}
