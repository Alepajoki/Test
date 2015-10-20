#include <iostream>

#include "fileinterface.hh"
#include "ui.hh"

using namespace std;

int main()
{
    FileInterface FileInter;
    ui UI;

    map<string,string> PlayerDB;
    PlayerDB = FileInter.ReadDB("d_PLAYERS");

    UI.PrintPlayers(PlayerDB);

}
