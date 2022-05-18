#pragma once
#include <cstdint>
#include <memory>
#include "Position.hpp"
#include "Status.hpp"

namespace rogue {
class Hero {
public:
    Hero();
    void Print() const noexcept;
    void Move(std::int32_t key) noexcept;

private:
    Position m_position;
    char m_symbol;
    std::unique_ptr<Status> m_status;
};
}
