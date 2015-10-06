#include <iostream>

#include "F:/Dropbox/FrisBee/fileinterface.hh"

using namespace std;

int main()
{
    FileInterface FileInter;
    vector<vector<string> > PlayerDB;
    PlayerDB = FileInter.ReadDB("d_PLAYERS");
}
