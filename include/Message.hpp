#pragma once
#include <string>
#include "Position.hpp"

namespace rogue{
class Message
{
public:
    Message(std::string message);
    ~Message();
    void Print() const noexcept;
    void Clear() const noexcept;
private:
    Position m_position;
    std::string m_message;
};
}
