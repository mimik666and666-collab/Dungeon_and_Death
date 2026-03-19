#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include <thread>
#include <chrono>
#include <functional>

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
    character() {}
public:
    virtual void Speak(string text) = 0;
    character(string name, int age, int race, string Color, string Portrait, int Class, int weapon)
    {
        this->Name = name;
        this->Age = age;
        this->Race = race;
        this->Color = Color;
        this->Portrait = Portrait;
        this->Class = Class;
        this->Weapon = weapon;

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
	// геттеры и сеттеры для всех характеристик персонажа, чтобы можно было изменять их в процессе игры и отображать при необходимости
};



class Choice // класс для выбора, который будет использоваться в сценах для отображения текста и перехода к следующей сцене
{
public:
	string text; // текст выбора, который будет отображаться игроку
	string nextSceneId;  // идентификатор следующей сцены, к которой перейдёт игрок при выборе этого варианта
	function<void()> effect = nullptr; // эффект, который будет выполняться при выборе этого варианта, например, изменение характеристик персонажа или отображение дополнительного текста
};


enum SceneId { // перечисление для идентификаторов сцен, чтобы было удобнее работать с ними
    INTRO,
    spawn_in_world,
    n,
    b,
    w,
    d,
    First_end_scene,
    SCENE_COUNT
};

class Scene
{

public:
	string sceneTitle(SceneId id) { // функция для получения названия сцены по её идентификатору, для отображения 
        switch (id) {
        case 0: return "";
        case 1: return "";
        default: return "???";
        }
    }
	void slow(const string& text, int delay_ms = 30) { // функция для медленного вывода текста, чтобы создать атмосферу
        for (char c : text) {
            cout << c << flush;
            this_thread::sleep_for(chrono::milliseconds(delay_ms));
        }
    }
	void press_enter() { // небольшая функция по нажатию Enter для продолжения
        string dummy;
        getline(cin, dummy);
    };
	SceneId runScene(SceneId current) { // функция для запуска сцены, которая будет отображать её название, выполнять её текст и возвращать идентификатор следующей сцены
        cout << "\n┌──────────────────────────────┐\n";
        cout <<   "│ " << sceneTitle(current)
            << string(26 - sceneTitle(current).length(), ' ') 
            <<    "│\n";
        cout <<   "└──────────────────────────────┘\n\n";

		switch (current) { // здесь будет логика для каждой сцены, которая будет использовать функции slow и press_enter 
           // для отображения текста и ожидания действий игрока, а также возвращать идентификатор следующей сцены в зависимости от выбора игрока
        case INTRO: {
            slow("\033[32mВы стоите перед дверью, в абсолютной пустоте, вы не видите ничего, а ничего смотрит вам в душу...\033[0m\n");
            slow("\033[32mНечто подталкивает вас открыть дверь...\033[0m\n");
            string s;
            getline(cin, s);
            if (s == "1")
            {

            }
            return spawn_in_world;
        }

        default:
            return current;
        }
    }

private:
    string ASCIIBackground;

};





//class Core
//{
//private:
//    Core()
//    {
//    };
//    ~Core()
//    {
//    };
//
//public:
//    Core() {};
//    ~Core() {};
//
//};
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, "");
    setlocale(LC_ALL, "ru");
    cout << "───тест───\n\n";

    Scene scene;              // создаём объект сцены
    SceneId current = INTRO;  // стартовая сцена

    while (current != SCENE_COUNT) // пока не конец игры
    {
        current = scene.runScene(current);
    }

    cout << "\nИгра завершена.\n";
    return 0;
}