#pragma once
#include "Character.hpp"

#include <memory>

namespace rogue {
    class GameSystem {
    public:
        GameSystem();
        ~GameSystem();
        void Create();
        void Loop();
    
    private:
        std::unique_ptr<character::Hero> m_hero;
    };
}
