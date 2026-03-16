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
    string color;
    string portrait;
    int Class;
    int Weapon;

public:
    virtual void Speak(string text) = 0;
    
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
    Core();
    ~Core();

};