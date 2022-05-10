#pragma once
#include <cstdint>

namespace character {
    class Hero {
    public:
        Hero(std::int32_t x, std::int32_t y, const char symbol);
        void Print() const;
        void Move(std::int32_t key);
    
    private:
        struct Position {
            std::int32_t m_x;
            std::int32_t m_y;
        };
        struct Entity {
           Position m_pos; 
           char m_symbol;
        };
        Entity m_entity;
    };
}
