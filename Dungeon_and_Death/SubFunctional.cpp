#include "SubFunctional.h"
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
class SubFunctional
{
public:
    void CLEAR()
    {
        cout << "\033[2J\033[1;1H";
    }
    void slow(string& text, int ms_per_char = 60)
    {
        for (char c : text)
        {
            cout << c << flush;
            this_thread::sleep_for(chrono::milliseconds(ms_per_char));
        }
        cout << "\n";
    }
    void fast(string& text, int ms_per_char = 20)
    {
        for (char c : text)
        {
            cout << c << flush;
            this_thread::sleep_for(chrono::milliseconds(ms_per_char));
        }
        cout << "\n";
    };
    void Enter()
    {
        string dummy;
        getline(cin, dummy);
    }
};