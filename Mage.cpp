//Mage.cpp
#include "Mage.h"

Mage::Mage(string name)
    : Character(name, 100, 1)
{
}

void Mage::showInfo() const
{
    cout << "=====Маг=====" << endl;
    cout << "Имя: " << name << endl;
    cout << "Здоровье: " << hp << endl;
    cout << "Уровень: " << level << endl;
}

string Mage::getType() const
{
    return "Маг";
}

void Mage::attack()
{
    cout << name << " выпускает магический шар" << endl;
}

void Mage::defend()
{
    cout << name << " создаёт магический щит" << endl;
}

void Mage::useSkill()
{
    cout << name << " выпускает огненный шар" << endl;
}