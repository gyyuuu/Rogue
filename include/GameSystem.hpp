#pragma once
#include "Hero.hpp"

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
    };
}
