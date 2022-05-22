#pragma once
#include <cstdint>

namespace rogue {
struct Position
{
    std::int32_t x;
    std::int32_t y;
//   Position operator + (const Position& rposition) {
//       Position tmp;
//       tmp.y = y + rposition.y;
//       tmp.x = x + rposition.x;
//       return tmp ;
//   };
//   bool operator == (const Position& rhsposition) const{
//       return ((y == rhsposition.y) && (x == rhsposition.x));
//   };
//   bool operator != (const Position& rhsposition) const {
//       return !(*this == rhsposition);
//   };
};
}
