//IAttackable.h
#ifndef IATTACKABLE_H
#define IATTACKABLE_H

class IAttackable
{
public:
    virtual void attack() = 0;
    virtual ~IAttackable() {}
};

#endif