#include <iomanip>
#include <string>
#include <conio.h>
#include <unistd.h>

#include "ui.hh"
#include "constants.h"

ui::ui()
{

}

void ui::PrintPlayers(map<string,string>& DB)
{
    system("cls");
    cout << setw (20) << left << "Player" << "Total score" << endl;
    cout << setfill('-') << setw(40) << "" << endl;

    map<string,string>::iterator it = DB.begin();
    while( it != DB.end() )
    {
        cout << setfill(' ') << setw(20) << left << it->first << it->second << endl;
        it++;
    }

    cout << endl;
}

void ui::ClearScreen(int value)
{
    switch(value)
    {
    case GOOD:
        cout << "Press any key..." << endl;
        getch();
        system("cls");
        return;
    case BAD:
        system("cls");
        cout << "Bad input! Press any key..." << endl;
        getch();
        system("cls");
        return;
    case EXIT:
        system("cls");
        cout << "Good bye stranger!" << endl;
        sleep(1);
        system("cls");
        return;
    }
}

string ui::AskPlayerName(){
    string name;
    cout << "Player's name: ";
    cin >> name;
    return name;
}
