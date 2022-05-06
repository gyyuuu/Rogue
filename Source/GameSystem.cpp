#include "header/Character.hpp"
#include "header/GameSystem.hpp"

#include <iostream>
#include <memory>

GameSystem::GameSystem() {}

GameSystem::~GameSystem() {}

void GameSystem::Create() {
    m_hero = std::make_unique<Character>(40,25,"@");
    m_hero->Print();
    m_hero->Move();
}
