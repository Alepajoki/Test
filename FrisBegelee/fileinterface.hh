#ifndef FILEINTERFACE_HH
#define FILEINTERFACE_HH

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

const char DELIMCHAR = '|';

class FileInterface
{
public:
    FileInterface();
    ~FileInterface();

    vector<vector<string> > ReadDB(const string& db);
    vector<string> GetDataInstances(string const& Row);
};

#endif // FILEINTERFACE_HH
