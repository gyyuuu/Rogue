#pragma once
#include <cstdint>
#include "Position.hpp"

namespace rogue {
class Status {
public:
    Status();
    ~Status();
    void Print() const noexcept;
    void LVUp(std::int32_t key) noexcept;
private:
    std::int32_t m_hitpoint;
    std::int32_t m_attack;
    std::int32_t m_defence;
    std::int32_t m_level;
};
}
