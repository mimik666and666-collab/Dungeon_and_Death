#pragma once
#include <string>
class SubFunctional
{
public:
	void CLEAR();
	void fast(string& text, int ms_per_char = 20);
	void slow(string& text, int ms_per_char = 60);
	void Enter();
};

