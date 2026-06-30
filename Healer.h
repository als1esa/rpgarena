//Healer.h
#ifndef HEALER_H
#define HEALER_H

#include "Character.h"
#include "IAttackable.h"
#include "IDefendable.h"
#include "ISkillUsable.h"

class Healer : public Character,
               public IAttackable,
               public IDefendable,
               public ISkillUsable
{
public:
    Healer(string name);

    void showInfo() const override;
    string getType() const override;

    void attack() override;
    void defend() override;
    void useSkill() override;
};

#endif