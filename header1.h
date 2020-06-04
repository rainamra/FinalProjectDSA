#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <list>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
// MAIN FUNCTIONS ---------------------------------------------------------


//PATIENT CLASS
class Patients
{
    private:
        string name,date,location;
        int age;

    public:
        Patients(){}

        Patients(string name, int age, string date, string location, string fever, string tiredness, string headache, string conjunctivitis, string diarrhea, string achesPains, string soreThroat, string dryCough, 
        string lossTasteSmell, string skinProbs, string breathingProbs, string chestPainPressure, string lossSpeechMovement)
        {
            this.name = name;
            this.age = age;
            this.date = date;
            this.location = location;
            this.fever = fever;
            this.tiredness = tiredness;
            this.headache = headache;
            this.conjunctivitis = conjunctivitis;
            this.diarrhea = diarrhea;
            this.achesPains = achesPains;
            this.soreThroat = soreThroat;
            this.dryCough = dryCough;
            this.lossTasteSmell = lossTasteSmell;
            this.skinProbs = skinProbs;
            this.breathingProbs = breathingProbs;
            this.chestPainPressure = chestPainPressure;
            this.lossSpeechMovement = lossSpeechMovement;
            
        }

        void setName(string name)
        {
            this.name = name;
        }

        string getName()
        {
            return this.name;
        }

        void setAge(int age)
        {
            this.age = age;
        }

        int getAge()
        {
            return this.age;
        }
        
        void setDate(string date)
        {
            this.date = date;
        }

        string getDate()
        {
            return this.date;
        }

        void setLocation(string location)
        {
            this.location = location;
        }

        string getLocation()
        {
            return this.location;
        }

        void setFever(string fever)
        {
            this.fever = fever;
        }

        string getFever()
        {
            return this.fever;
        }

        void setTiredness(string tiredness)
        {
            this.tiredness = tiredness;
        }

        string getiredness()
        {
            return this.tiredness;
        }

        void setConjunctivitis(string conjunctivitis)
        {
            this.conjunctivitis = conjunctivitis;
        }

        string getConjunctivitis()
        {
            return this.conjunctivitis;
        }

        void setLocation(string)
        {
            this.location = location;
        }

        string getLocation()
        {
            return this.location;
        }

        void setHeadache(string headache)
        {
            this.headache = headache;
        }

        string getHeadache()
        {
            return this.headache;
        }

        void setDiarrhea(string diarrhea)
        {
            this.diarrhea = diarrhea;
        }

        string getDiarrhea()
        {
            return this.diarrhea;
        }

        void setAchesPains(string achesPains)
        {
            this.achesPains = achesPains;
        }

        string getAchesPains()
        {
            return this.achesPains;
        }

        void setSoreThroat(string achesPains)
        {
            this.soreThroat = soreThroat;
        }

        string getSoreThroat()
        {
            return this.soreThroat;
        }

        void setDryCough(string dryCough)
        {
            this.dryCough = dryCough;
        }

        string getDryCough()
        {
            return this.dryCough;
        }

        void setLossTasteSmell(string lossTasteSmell)
        {
            this.lossTasteSmell = lossTasteSmell;
        }

        string getLossTasteSmell()
        {
            return this.lossTasteSmell;
        }

        void setSkinProbs(string skinProbs)
        {
            this.skinProbs = skinProbs;
        }

        string getSkinProbs()
        {
            return this.skinProbs;
        }

        void setBreathingProbs(string breathingProbs)
        {
            this.breathingProbs = breathingProbs;
        }

        string getBreathingProbs()
        {
            return this.breathingProbs;
        }

        void setAchestPainPressure(string achestPainPressure)
        {
            this.achestPainPressure = achestPainPressure;
        }

        string getAchestPainPressure()
        {
            return this.achestPainPressure;
        }

        void setLossSpeechMovement(string lossSpeechMovement)
        {
            this.lossSpeechMovement = lossSpeechMovement;
        }

        string getLossSpeechMovement()
        {
            return this.lossSpeechMovement;
        }
        

};




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

      if(month_a.compare(month_b) != 0)
    {   
        if(month_a.compare(month_b) < 0)
        {
            return true;
        }
        return false; 
    }
    
    
    
    

    //compare day
    string day_a = a.substr(0,2);
    string day_b = b.substr(0,2);

    if(day_a.compare(day_b) < 0)
    {
        return true;
    }
    return false;
}



void printDates(vector<string> dates, int n) 
{ 
    for (int i = 0; i < n; i++) { 
        cout << dates[i] << endl; 
    } 
} 

void dateSort()
{

    string line;

    string name,ageStr,date,place;
    int age;

    ifstream datafile("data.txt");

    vector<string> dates;

    while (getline(datafile,line))
    {
        stringstream ss(line);

        getline(ss,name,',');
        getline(ss,ageStr,','); //age stored into string
        age = stoi(ageStr); //Stoi = casting variable, converting to int
        getline(ss,date,',');
        getline(ss,place,',');

        dates.push_back(date);

    }

    int n = dates.size();
    
    sort(dates.begin() , dates.end(), compare);

    printDates(dates,n);


    

}


void nameSort()
{
    
    vector<Patients> patients;
    
    ifstream datafile("data.txt");

    for(i = 0; i <= )

    temp = Patients("0",0,"0","0");
    patients.push_back(temp);
    temp.setName(name);
    temp.setAge(age);
    temp.setDate(date);
    temp.setLocation(location);

}

void ageSort()
{

}


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
            {
                nameSort();
            }
        case 2:
            {
                ageSort();
            }
        case 3:
            {
                dateSort();
            }

        case 4:
        case 5:
            {
                break;
            }
    }
}