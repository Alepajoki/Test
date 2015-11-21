#include <iostream>
#include <windows.h>

#include "fileinterface.hh"
#include "ui.hh"
#include "constants.h"

using namespace std;

int main(){
    FileInterface FileInter; //Initialize file interface

    map<string,string> PlayerDB; // Initialize player database
    PlayerDB = FileInter.ReadDB("d_PLAYERS");

    ui UI; // Initialize user interface

    while(true)
    {
        cout << "Hello stranger! Please select function:" << endl;
        cout << endl;
        cout << "1 - show all players in player database" << endl;
        cout << "2 - add new player to database" << endl;
        cout << "3 - exit" << endl;
        cout << endl;
        cout << "Select function: ";

        int input = 0;
        if(!(cin >> input)){
            cin.clear();
            UI.ClearScreen(BAD);
            continue;
        }

        switch(input){
        case 1:
            UI.PrintPlayers(PlayerDB);
            UI.ClearScreen(GOOD);
            continue;
        case 2:{
            string newplayer = UI.AskPlayerName();
            FileInter.AddPlayerToDB(PlayerDB,"d_PLAYERS",newplayer);
            system("cls");
            continue;}
        case 3:
            UI.ClearScreen(EXIT);
            break;
        default:
            UI.ClearScreen(BAD);
            continue;
        }

        break;
    }

    DestroyWindow(GetActiveWindow());
}
