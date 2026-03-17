#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;

class character
{
private:
    string Name;
    int Age;
    int Race;
    string Color;
    string Portrait;
    int Class;
    int Weapon;
    character(){}
public:
    virtual void Speak(string text) = 0;
    character(string name, int age, int race, string Color, string Portrait, int Class, int weapon)
    {
        this->Name;
        this->Age;
        this->Class;
        this->Color;
        this->Portrait;
        this->Race;
        this->Weapon;

    }
    void setterName(string naming) { naming = Name; }
    void setterAge(int aging) { aging = Age; }
    void setterRace(int Racing) { Racing = Race; }
    void setterColor(string Coloring) { Coloring = Color; }
    void setterPortrait(string portrating) { portrating = Portrait; }
    void setterClass(int Classing) { Classing = Class; }
    void setterWeapon(int weaponing) { weaponing = Weapon; }

    void getterName(string nam) { Name = nam; }
    void getterAge(int ag) { Age = ag; }
    void getterRace(int rac) { Race = rac; }
    void getterColor(string col) { Color = col; }
    void getterPortrait(string portra) { Portrait = portra; }
    void getterClass(int clas) { Class = clas; }
    void getterWeapon(int weap) { Weapon = weap; }

};

class Choice
{
public:
    Scene nextScene;

private:
    string text;
};




class Scene
{

private:
    string Title;
    string ASCIIBackground;
    vector<Choice> Choice;

public:
   
};





class Core
{
private:
    Core()
    {};
    ~Core()
    {};

public:
    Core() {};
    ~Core() {};

};