#include <iostream>

#include "fileinterface.hh"

using namespace std;

int main()
{
    FileInterface FileInter;
    vector<vector<string> > PlayerDB;
    PlayerDB = FileInter.ReadDB("d_PLAYERS");
}
