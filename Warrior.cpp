//Warrior.cpp
#include "Warrior.h"

Warrior::Warrior(string name)
    : Character(name, 150, 1)
{
}

void Warrior::showInfo() const
{
    cout << "=====Воин=====" << endl;
    cout << "Имя: " << name << endl;
    cout << "Здоровье: " << hp << endl;
    cout << "Уровень: " << level << endl;
}

string Warrior::getType() const
{
    return "Воин";
}

void Warrior::attack()
{
    cout << name << " атакует мечом" << endl;
}

void Warrior::defend()
{
    cout << name << " поднимает щит " << endl;
}

void Warrior::useSkill()
{
    cout << name << " использует мощный удар " << endl;
}