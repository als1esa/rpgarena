//Character.cpp
#include "Character.h"

Character::Character(string name, int hp, int level)
{
    this->name = name;
    this->hp = hp;
    this->level = level;
}

string Character::getName() const
{
    return name;
}

int Character::getHP() const
{
    return hp;
}

int Character::getLevel() const
{
    return level;
}