#ifndef UI_H
#define UI_H

#include <map>
#include <string>
#include <iostream>

using namespace std;

class ui
{
public:
    ui();

    void PrintPlayers(map<string,string>& DB);
    void ClearScreen(int value);
    string AskPlayerName();
};

#endif // UI_H
