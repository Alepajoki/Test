#include "fileinterface.hh"

FileInterface::FileInterface()
{

}

FileInterface::~FileInterface()
{

}

map<string,string> FileInterface::ReadDB(const string& db)
{
    map<string,string> dbInMemory;
    ifstream File;
    File.open(db.c_str());

    string Row;
    for(int RowCount = 0;getline(File,Row);RowCount++)
    {
        vector<string> DataInstances = GetDataInstances(Row);
        pair<string,string> DataPair = make_pair(DataInstances[0],DataInstances[1]);
        dbInMemory.insert(DataPair);
    }

    File.close();
    return dbInMemory;
}

vector<string> FileInterface::GetDataInstances(string const& Row)
{
    vector<string> rowInstances;
    unsigned int i = 0;
    string Instance;
    while(i < Row.length())
    {
        while(Row.at(i) != DELIMCHAR)
        {
           Instance.push_back(Row.at(i));
           i++;
        }
        rowInstances.push_back(Instance);
        Instance = "";
        i++;
    }

    return rowInstances;
}

