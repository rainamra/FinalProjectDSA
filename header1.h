#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <list>
#include <vector>

using namespace std;

void addPatients(string name,int age, string location)
{

    ofstream foutput;
    ifstream finput;

    finput.open("data.txt");

    if ( finput.peek() == std::ifstream::traits_type::eof() ) //if file is empty
    {
        
        foutput.open("data.txt");

        if(finput.is_open())
        {
            foutput << name << "," << age << "," << location << "\n";
        }

        finput.close();
        foutput.close();
    }

    else //if theres already data in file
    {
        finput.open("data.txt");
        foutput.open("data.txt",ios::app);

        if(finput.is_open())
        {
            foutput << name << "," << age << "," << location << "\n";
        }

        finput.close();
        foutput.close();
    }
    
}

void viewPatients()
{
    ifstream datafile("data.txt");

    if ( datafile.peek() == std::ifstream::traits_type::eof() )
    {

        cout << "Patient Data is Empty!" << endl;

    }

    else
    {
        cout << "Name\t\t" << "Age\t\t" << "Place" << endl;

        

        string name,place;
        int age;

        string ageStr;
        string line;



        while(getline(datafile,line))
        {
            stringstream ss(line);

            getline(ss,name,',');
            getline(ss,ageStr,','); //age stored into string
            age = stoi(ageStr); //Stoi = casting variable, converting to int
            getline(ss,place,',');

            if(name.length() < 8 ) //for neater CLI
            {
                cout << name << "\t\t" << age << "\t\t" << place << "\n"; 
            }

            else
            {
                cout << name << "\t" << age << "\t\t" << place << "\n"; 
            }
            

        }

        datafile.close();
    }
    

}
