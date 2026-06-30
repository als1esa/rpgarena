//Character.h
#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

using namespace std;

class Character
{
protected:
    string name;
    int hp;
    int level;

public:
    Character(string name, int hp, int level);

    virtual void showInfo() const = 0;
    virtual string getType() const = 0;

    string getName() const;
    int getHP() const;
    int getLevel() const;

    virtual ~Character() {}
};

#endif