#pragma once

#include "Position.hpp"
#include <cstdint>
namespace rogue {
class Status {
public:
    Status();
    ~Status();
    void Print() const noexcept;
private:
    std::int32_t m_HP;
    std::int32_t m_ATK;
    std::int32_t m_DEF;
    std::int32_t m_LV;
    Position m_position;
    void GetPosition() const noexcept;
};
}
