//GameManager.cpp
#include "GameManager.h"

#include <iostream>

using namespace std;

void GameManager::showMenu()
{
    cout << "\n===== RPG Арена =====" << endl;
    cout << "1.Создать персонажа" << endl;
    cout << "2.Показать всех персонажей" << endl;
    cout << "3.Показать информацию о персонаже" << endl;
    cout << "4.Атаковать" << endl;
    cout << "5.Использовать способность" << endl;
    cout << "6.Удалить персонажа" << endl;
    cout << "7.Выход" << endl;
    cout << "Выберите действие: ";
}

void GameManager::createCharacter()
{
    int choice;
    string name;

    cout << "Введите имя: ";
    cin >> name;

    cout << "Выберите класс:" << endl;
    cout << "1.Воин" << endl;
    cout << "2.Маг" << endl;
    cout << "3.Лучник" << endl;
    cout << "4.Целитель" << endl;
    cin >> choice;

    switch(choice)
    {
        case 1:
            characters.push_back(make_shared<Warrior>(name));
            break;

        case 2:
            characters.push_back(make_shared<Mage>(name));
            break;

        case 3:
            characters.push_back(make_shared<Archer>(name));
            break;

        case 4:
            characters.push_back(make_shared<Healer>(name));
            break;

        default:
            cout << "Ошибка" << endl;
    }
}

void GameManager::showCharacters()
{
    if(characters.empty())
    {
        cout << "Персонажи еще не добавлены." << endl;
        return;
    }

    for(int i = 0; i < characters.size(); i++)
    {
        cout << i + 1 << ". "
             << characters[i]->getName()
             << " ("
             << characters[i]->getType()
             << ")" << endl;
    }
}

void GameManager::showCharacterInfo()
{
    int index;

    showCharacters();

    cout << "Выберите персонажа: ";
    cin >> index;

    if(index >= 1 && index <= characters.size())
    {
        characters[index - 1]->showInfo();
    }
    else
    {
        cout << "Ошибка" << endl;
    }
}

void GameManager::attack()
{
    int index;

    showCharacters();

    cout << "Выберите персонажа: ";
    cin >> index;

    if(index >= 1 && index <= characters.size())
    {
        Character* c = characters[index - 1].get();

        IAttackable* attacker = dynamic_cast<IAttackable*>(c);

        if(attacker)
            attacker->attack();
    }
}

void GameManager::useSkill()
{
    int index;

    showCharacters();

    cout << "Выберите персонажа: ";
    cin >> index;

    if(index >= 1 && index <= characters.size())
    {
        Character* c = characters[index - 1].get();

        ISkillUsable* skill = dynamic_cast<ISkillUsable*>(c);

        if(skill)
            skill->useSkill();
    }
}

void GameManager::deleteCharacter()
{
    int index;

    showCharacters();

    cout << "Выберите персонажа: ";
    cin >> index;

    if(index >= 1 && index <= characters.size())
    {
        characters.erase(characters.begin() + index - 1);
        cout << "Персонаж удален" << endl;
    }
}

void GameManager::run()
{
    int choice;

    do
    {
        showMenu();

        cin >> choice;

        switch(choice)
        {
            case 1:
                createCharacter();
                break;

            case 2:
                showCharacters();
                break;

            case 3:
                showCharacterInfo();
                break;

            case 4:
                attack();
                break;

            case 5:
                useSkill();
                break;

            case 6:
                deleteCharacter();
                break;

            case 7:
                cout << "До новых встреч!! =)" << endl;
                break;

            default:
                cout << "Ошибка" << endl;
        }

    } while(choice != 7);
}