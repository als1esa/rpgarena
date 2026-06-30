//IDefendable.h
#ifndef IDEFENDABLE_H
#define IDEFENDABLE_H

class IDefendable
{
public:
    virtual void defend() = 0;
    virtual ~IDefendable() {}
};

#endif