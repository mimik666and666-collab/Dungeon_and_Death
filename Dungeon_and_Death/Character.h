#pragma once
#include <string>
#include <iostream>
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
    Character();
    ~Character();
public:
    virtual void Speak(string text) = 0;
    Character(string name, int age, int race, string Color, string portrait, int Class, int weapon)
    {}
};

