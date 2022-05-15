#pragma once
#include "Hero.hpp"
#include "Dungeon.hpp"
#include "Monster.hpp"
#include <memory>

namespace rogue {
class GameSystem {
public:
    GameSystem();
    ~GameSystem();
    void Create();
    void Loop();

private:
    std::unique_ptr<rogue::Hero> m_hero;
    std::unique_ptr<rogue::Dungeon> m_dungeon;
    std::unique_ptr<rogue::Monster> m_monster;
    Status m_hero_status;
};
}
