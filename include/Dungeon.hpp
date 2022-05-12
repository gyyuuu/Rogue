#pragma once
#include <cstdint>
#include <string>

namespace rogue {
class Dungeon {
public:
    Dungeon();
    ~Dungeon();
    void Print();
private:
    std::string m_symbol;
};
}
