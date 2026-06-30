//Healer.cpp
#include "Healer.h"

Healer::Healer(string name)
    : Character(name, 110, 1)
{
}

void Healer::showInfo() const
{
    cout << "=====Целитель=====" << endl;
    cout << "Имя: " << name << endl;
    cout << "Здоровье: " << hp << endl;
    cout << "Уровень: " << level << endl;
}

string Healer::getType() const
{
    return "Целитель";
}

void Healer::attack()
{
    cout << name << " атакует ядовитым зельем" << endl;
}

void Healer::defend()
{
    cout << name << " создает защитный купол " << endl;
}

void Healer::useSkill()
{
    cout << name << " использует исцеляющее зелье " << endl;
}