//ISkillUsable.hh
#ifndef ISKILLUSABLE_H
#define ISKILLUSABLE_H

class ISkillUsable
{
public:
    virtual void useSkill() = 0;
    virtual ~ISkillUsable() {}
};

#endif