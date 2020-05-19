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
    cout << "----------------------" << endl;
    cout << "Patient successfully added to database!" << endl;


}

void removePatients(string name)
{

    map_data.erase(name);
    
    cout << "Patient " << name << " has been discharged!" << endl;

}



void viewPatients()
{
    //Code to View Patient
    cout << "Name" << '\t' << "Age\n" << endl;

    for (itr = map_data.begin(); itr != map_data.end(); ++itr)
    {
        cout << itr->first << '\t' << itr->second << '\n';
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





