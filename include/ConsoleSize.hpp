#pragma once

#include "Position.hpp"
namespace rogue {
class ConsoleSize{
public:
    ConsoleSize(/* args */);
    ~ConsoleSize();
    const Position GetCenter() const noexcept;
private:
    std::int32_t m_width;
    std::int32_t m_height;
};
}
