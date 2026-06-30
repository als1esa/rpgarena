//Mage.h
#ifndef MAGE_H
#define MAGE_H

#include "Character.h"
#include "IAttackable.h"
#include "IDefendable.h"
#include "ISkillUsable.h"

class Mage : public Character,
             public IAttackable,
             public IDefendable,
             public ISkillUsable
{
public:
    Mage(string name);

    void showInfo() const override;
    string getType() const override;

    void attack() override;
    void defend() override;
    void useSkill() override;
};

#endif