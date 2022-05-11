#pragma once
#include <cstdint>
#include <vector>

namespace rogue {
    class Dungeon {
    public:
        Dungeon();
        ~Dungeon();
        void Print();
    private:
        static constexpr std::int32_t DUNGEON_ROW_SIZE = 6;
        static constexpr std::int32_t DUNGEON_COLUMN_SIZE = 18;
        char m_symbol[DUNGEON_ROW_SIZE][DUNGEON_COLUMN_SIZE];
    };
}
