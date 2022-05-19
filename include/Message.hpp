#pragma once
#include <string>
#include <cstdint>
#include "Position.hpp"

namespace rogue{
class Message
{
public:
    Message();
    ~Message();
    void Print(std::string message) const noexcept;
private:
    Position m_position;
    std::int32_t m_region;
    void Clear() const noexcept;
};
}
