//Archer.cpp
#include "Archer.h"

Archer::Archer(string name)
    : Character(name, 120, 1)
{
}

void Archer::showInfo() const
{
    cout << "=====Лучник=====" << endl;
    cout << "Имя: " << name << endl;
    cout << "Здоровье: " << hp << endl;
    cout << "Уровень: " << level << endl;
}

string Archer::getType() const
{
    return "Лучник";
}

void Archer::attack()
{
    cout << name << " выпускает стрелу " << endl;
}

void Archer::defend()
{
    cout << name << " уклоняется от атаки врага" << endl;
}

void Archer::useSkill()
{
    cout << name << " начинает дождь из стрел " << endl;
}