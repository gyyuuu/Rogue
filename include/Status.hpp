#pragma once

#include <cstdint>
namespace rogue {
class Status {
public:
    Status();
    ~Status();
private:
    std::int32_t m_HP;
    std::int32_t m_ATK;
    std::int32_t m_DEF;
    std::int32_t m_LV;
};
}
