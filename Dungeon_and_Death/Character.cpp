#include "Character.h"
#include <string>
#include <iostream>
using namespace std;
class Character
{
private:
    string Name;
    int Age;
    int Race;
    string Color;
    string Portrait;
    int Class;
    int Weapon;
    Character() {}
    ~Character() {}
    public:
    virtual void Speak(string text) = 0;
    Character(string name, int age, int race, string Color, string portrait, int Class, int weapon)
    {
        this->Name = name;
        this->Age = age;
        this->Race = race;
        this->Color = Color;
        this->Portrait = portrait;
        this->Class = Class;
        this->Weapon = weapon;

    }
    // переделывать геттеры и сеттеры



};