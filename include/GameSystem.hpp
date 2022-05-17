#pragma once
#include <memory>
#include "Hero.hpp"
#include "Dungeon.hpp"
#include "Monster.hpp"

namespace rogue {
class GameSystem {
public:
    GameSystem();
    ~GameSystem();
    void Create();
    void Loop();

private:
    std::unique_ptr<Hero> m_hero;
    std::unique_ptr<Dungeon> m_dungeon;
    std::unique_ptr<Monster> m_monster;
    Status m_hero_status;
};
}
