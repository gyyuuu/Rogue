#pragma once
#include <cstdint>

class Character {
public:
    Character(std::int32_t x, std::int32_t y, const char* aacode);
    void Print() const;
    void Move();

private:
    struct Position {
        std::int32_t m_x;
        std::int32_t m_y;
    };

    struct Entity {
       Position m_pos; 
       const char* m_aacode;
    };

    Entity m_entity;

};
