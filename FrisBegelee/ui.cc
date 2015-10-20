#include "ui.hh"

ui::ui()
{

}

void ui::PrintPlayers(map<string,string>& DB)
{
    map<string,string>::iterator it = DB.begin();
    while( it != DB.end() )
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }
}
