#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <list>
#include <vector>

using namespace std;
// MAIN FUNCTIONS ---------------------------------------------------------

void addPatients(string name,int age, string date, string location)
{

    ofstream foutput;
    ifstream finput;

    finput.open("data.txt");

    if ( finput.peek() == std::ifstream::traits_type::eof() ) //if file is empty
    {
        
        foutput.open("data.txt");

        if(finput.is_open())
        {
            foutput << name << "," << age << "," << date << "," << location << "\n";
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
            foutput << name << "," << age << "," << date << "," << location << "\n";
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
        cout << "Name\t\t" << "Age\t\t" << "Date\t\t" << "Location" << endl;

        

        string name,place,date;
        int age;

        string ageStr;
        string line;



        while(getline(datafile,line))
        {
            stringstream ss(line);

            getline(ss,name,',');
            getline(ss,ageStr,','); //age stored into string
            age = stoi(ageStr); //Stoi = casting variable, converting to int
            getline(ss,date,',');
            getline(ss,place,',');

            if(name.length() < 8 ) //for neater CLI
            {
                cout << name << "\t\t" << age << "\t\t" << date << "\t" << place << "\n"; 
            }

            else
            {
                cout << name << "\t" << age << "\t\t" << date << "\t" << place << "\n"; 
            }
            

        }

        datafile.close();
    }
    

}


// SORTING -----------------------------------------------

void selectSort()
{
    int selectSort;
    //Sorting Menu
    cout << "----------------------" << endl;
    cout << "Sorting Options: " << endl;
    cout << "1. Name\n" << "2. Age\n" << "3. Date\n" << "4. Location\n" << "5. Back" << endl;
    cout << "----------------------" << endl;
    cout << "Selection: ";
    cin >> selectSort;

    switch(selectSort)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            {
                break;
            }
    }
}

//DATE SORTING
bool compare(string a, string b) // compare fuction to sort array of dates
{
    //ex: 11/10/2020

    //compare year
    string str1 = a.substr(6,4);
    string str2 = b.substr(6,4);
    if(str1.compare(str2) != 0)
    {
        if(str1.compare(str2) < 0)
        {
            return true;
        }
        return false;
    }

    //compare month
    string month_a = a.substr(3,2);
    string month_b = b.substr(3,2);

    if(month_a.compare(month_b) < 0)
    {
        return true;
    }
    return false;
    
    

    //compare day
    string day_a = a.substr(0,2);
    string day_b = b.substr(0,2);

    if(day_a.compare(day_b) < 0)
    {
        return true;
    }
    return false;
}



