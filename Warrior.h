//Warrior.h
#ifndef WARRIOR_H
#define WARRIOR_H

#include "Character.h"
#include "IAttackable.h"
#include "IDefendable.h"
#include "ISkillUsable.h"

class Warrior : public Character,
                public IAttackable,
                public IDefendable,
                public ISkillUsable
{
public:
    Warrior(string name);

    void showInfo() const override;
    string getType() const override;

    void attack() override;
    void defend() override;
    void useSkill() override;
};

#endif