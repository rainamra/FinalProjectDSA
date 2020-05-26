#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <vector>

using namespace std;

void addPatients(string name,int age, string location)
{

    ofstream datafile("data.txt");

    datafile << name << "," << age << "," << location << endl;

    datafile.close();

}

void viewPatients()
{
    
    ifstream datafile("data.txt");

    while(datafile)
    {
        
    }

}
