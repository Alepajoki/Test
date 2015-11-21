#ifndef FILEINTERFACE_HH
#define FILEINTERFACE_HH

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>

using namespace std;

const char DELIMCHAR = '|';

class FileInterface
{
public:
    FileInterface();
    ~FileInterface();

    map<string,string> ReadDB(const string& db);
    vector<string> GetDataInstances(string const& Row);
    void AddPlayerToDB(map<string,string>& dbInMemory, const string &dbFile, string const& name);
};

#endif // FILEINTERFACE_HH
