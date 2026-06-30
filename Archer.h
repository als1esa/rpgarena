//Archer.h
#ifndef ARCHER_H
#define ARCHER_H

#include "Character.h"
#include "IAttackable.h"
#include "IDefendable.h"
#include "ISkillUsable.h"

class Archer : public Character,
               public IAttackable,
               public IDefendable,
               public ISkillUsable
{
public:
    Archer(string name);

    void showInfo() const override;
    string getType() const override;

    void attack() override;
    void defend() override;
    void useSkill() override;
};

#endif