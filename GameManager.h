//GameManager.h
#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <vector>
#include <memory>

#include "Character.h"
#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"
#include "Healer.h"

using namespace std;

class GameManager
{
private:
    vector<shared_ptr<Character>> characters;

public:
    void run();

private:
    void showMenu();
    void createCharacter();
    void showCharacters();
    void showCharacterInfo();
    void useSkill();
    void attack();
    void deleteCharacter();
};

#endif