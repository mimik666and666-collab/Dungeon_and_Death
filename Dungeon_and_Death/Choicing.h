#pragma once
#include <string>
#include <iostream>
#include "IIScene.h"
class Choicing
{
  // класс для выбора, который будет использоваться в сценах для отображения текста и перехода к следующей сцене
   
string text; // текст выбора, который будет отображаться игроку
IIScene* NextScene;  // переход на следующую сцену по указателю
public:
    void GotoNextscene();
    
};

