#pragma once
#include <cstdint>

namespace rogue {
    class Hero {
    public:
        Hero(std::int32_t row, std::int32_t column, const char symbol);
        void Print() const;
        void Move(std::int32_t key);
    
    private:
        struct Position {
            std::int32_t m_column;
            std::int32_t m_row;
        };
        struct Entity {
           Position m_pos; 
           char m_symbol;
        };
        Entity m_entity;
    };
}
