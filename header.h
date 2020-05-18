/*

Final Project

Create a system to handle data for Covid-19 Patients. The data will consist of:

- Name
- Age
- Location of Infected
- Symptoms

and through these data, the system will analyze

- Severity of the Virus
- Hot Spots for Corona
- 

the system will also be able to sort / filter through the data


*/

#include <iostream>
#include <map>
#include <list>
#include <iterator>
#include <string>

using namespace std;

map<string,int> map_data;
map<string,int>::iterator itr;

map<string,int>::iterator findItr;



void addPatients(string name,int age)
{

    map_data.insert(pair<string,int>(name,age));
     //Code to View Patient
    for (itr = map_data.begin(); itr != map_data.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }

}

void removePatients(string name)
{

    map_data.erase(name);
    
    cout << "Patient " << name << " has been discharged!" << endl;

}



void viewPatients()
{
    //Code to View Patient
    for (itr = map_data.begin(); itr != map_data.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }

}

bool findKey(string name)
{
    
    findItr = map_data.find(name);

    if (findItr == map_data.end())
    {
        return false;
    }

    else
    {
        return true;
    }
    

}





