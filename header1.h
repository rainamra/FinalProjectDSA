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
        string fever, tiredness, headache, conjunctivitis, diarrhea, achesPains, soreThroat, dryCough, lossTasteSmell, skinProbs, breathingProbs, chestPainPressure, lossSpeechMovement;

    public:
        Patients(){}

        Patients(string Name, int Age, string Date, string Location, string Fever, string Tiredness, string Headache, string Conjunctivitis, string Diarrhea, string AchesPains, string SoreThroat, string DryCough, 
        string LossTasteSmell, string SkinProbs, string BreathingProbs, string ChestPainPressure, string LossSpeechMovement)
        {
            name = Name;
            age = Age;
            date = Date;
            location = Location;

            //symptoms
            fever = Fever;
            tiredness = Tiredness;
            headache = Headache;
            conjunctivitis = Conjunctivitis;
            diarrhea = Diarrhea;
            achesPains = AchesPains;
            soreThroat = SoreThroat;
            dryCough = DryCough;
            lossTasteSmell = LossTasteSmell;
            skinProbs = SkinProbs;
            breathingProbs = BreathingProbs;
            chestPainPressure = ChestPainPressure;
            lossSpeechMovement = LossSpeechMovement;
            
        }

        void setName(string Name)
        {
            name = Name;
        }

        string getName()
        {
            return name;
        }

        void setAge(int Age)
        {
            age = Age;
        }

        int getAge()
        {
            return age;
        }
        
        void setDate(string Date)
        {
            date = Date;
        }

        string getDate()
        {
            return date;
        }

        void setLocation(string Location)
        {
            location = Location;
        }

        string getLocation()
        {
            return location;
        }

        void setFever(string Fever)
        {
            fever = Fever;
        }

        string getFever()
        {
            return fever;
        }

        void setTiredness(string Tiredness)
        {
            tiredness = Tiredness;
        }

        string getTiredness()
        {
            return tiredness;
        }

        void setConjunctivitis(string Conjunctivitis)
        {
            conjunctivitis = Conjunctivitis;
        }

        string getConjunctivitis()
        {
            return conjunctivitis;
        }

        void setHeadache(string Headache)
        {
            headache = Headache;
        }

        string getHeadache()
        {
            return headache;
        }

        void setDiarrhea(string Diarrhea)
        {
            diarrhea = Diarrhea;
        }

        string getDiarrhea()
        {
            return diarrhea;
        }

        void setAchesPains(string AchesPains)
        {
            achesPains = AchesPains;
        }

        string getAchesPains()
        {
            return achesPains;
        }

        void setSoreThroat(string SoreThroat)
        {
            soreThroat = SoreThroat;
        }

        string getSoreThroat()
        {
            return soreThroat;
        }

        void setDryCough(string DryCough)
        {
            dryCough = DryCough;
        }

        string getDryCough()
        {
            return dryCough;
        }

        void setLossTasteSmell(string LossTasteSmell)
        {
            lossTasteSmell = LossTasteSmell;
        }

        string getLossTasteSmell()
        {
            return lossTasteSmell;
        }

        void setSkinProbs(string SkinProbs)
        {
            skinProbs = SkinProbs;
        }

        string getSkinProbs()
        {
            return skinProbs;
        }

        void setBreathingProbs(string BreathingProbs)
        {
            breathingProbs = BreathingProbs;
        }

        string getBreathingProbs()
        {
            return breathingProbs;
        }

        void setChestPainPressure(string ChestPainPressure)
        {
            chestPainPressure = ChestPainPressure;
        }

        string getChestPainPressure()
        {
            return chestPainPressure;
        }

        void setLossSpeechMovement(string LossSpeechMovement)
        {
            lossSpeechMovement = LossSpeechMovement;
        }

        string getLossSpeechMovement()
        {
            return lossSpeechMovement;
        }

        //FUNCTION to get year/month/day from date of class
        int getYear()
        {
            int year;
            year = stoi(date.substr(6,4));
            return year;
        }

        int getMonth()
        {
            int month;
            month = stoi(date.substr(3,2));
            return month;
        }

        int getDay()
        {
            int day;
            day = stoi(date.substr(0,2));
            return day;
        }
        

};

//GW PINDAHIN KE BAWAH buat format

// SORTING -----------------------------------------------


//DATE SORTING

void swap(Patients *xp, Patients *yp)
{
    Patients temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printDates(vector<string> dates, int n) 
{ 
    for (int i = 0; i < n; i++) { 
        cout << dates[i] << endl; 
    } 
} 

void dateSort()
{

    vector<Patients> patients;
    string lines,name,ageStr,date,place;
    string Fever,Tiredness,Headache,Conjunctivitis,Diarrhea,AchesPains,SoreThroat,DryCough,LossTasteSmell,SkinProbs,BreathingProbs,ChestPainPressure,LossSpeechMovement;
    int age;

    int numOfLines = 0;
    ifstream datafile("data.txt");


    //grabbing data from file, creating an object of class Patients and appending to an array
    while (getline(datafile,lines))
    {
        stringstream ss(lines);

        getline(ss,name,',');
        getline(ss,ageStr,','); //age stored into string
        age = stoi(ageStr); //Stoi = casting variable, converting to int
        getline(ss,date,',');
        getline(ss,place,'%');
        getline(ss,Fever,',');
        getline(ss,Tiredness,',');
        getline(ss,Headache,',');
        getline(ss,Conjunctivitis,',');
        getline(ss,Diarrhea,',');
        getline(ss,AchesPains,'&');
        getline(ss,SoreThroat,',');
        getline(ss,DryCough,',');
        getline(ss,LossTasteSmell,',');
        getline(ss,SkinProbs,'$');
        getline(ss,BreathingProbs,',');
        getline(ss,ChestPainPressure,',');
        getline(ss,LossSpeechMovement,',');


        Patients temp("0",0,"0","0","0","0","0","0","0","0","0","0","0","0","0","0","0");
        temp.setName(name);
        temp.setAge(age);
        temp.setDate(date);
        temp.setLocation(place);
        temp.setFever(Fever);
        temp.setTiredness(Tiredness);
        temp.setHeadache(Headache);
        temp.setConjunctivitis(Conjunctivitis);
        temp.setDiarrhea(Diarrhea);
        temp.setAchesPains(AchesPains);
        temp.setSoreThroat(SoreThroat);
        temp.setDryCough(DryCough);
        temp.setLossTasteSmell(LossTasteSmell);
        temp.setSkinProbs(SkinProbs);
        temp.setBreathingProbs(BreathingProbs);
        temp.setChestPainPressure(ChestPainPressure);
        temp.setLossSpeechMovement(LossSpeechMovement);
        
        patients.push_back(temp);

        numOfLines++;

    }

    for(int i = 0; i < patients.size()-1;i++)
    {
        for(int j = i+1;j<patients.size();j++)
        {
            if(patients[i].getYear() > patients[j].getYear())
            {
                swap(patients[i],patients[j]);
            }

            else if(patients[i].getYear() == patients[j].getYear() && patients[i].getMonth() > patients[j].getMonth())
            {
                swap(patients[i],patients[j]);
            }

            else if(patients[i].getYear() == patients[j].getYear() && patients[i].getMonth() == patients[j].getMonth() && patients[i].getDay() > patients[j].getDay())
            {
                swap(patients[i],patients[j]);
            }
        }
    }

    //printing 
    cout << "Name\t\t" << "Age\t\t" << "Date\t\t" << "Location\t" << "Symptoms" << "\n";
    for(int i = 0; i < numOfLines; i++)
    {
        if(name.length() < 8 ) //for neater CLI
        {
            if(place.length() < 8)
            {
                cout << "\n" << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }

            else
            {
                cout << "\n" << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }
            
        }

        else
        {
            if(place.length() < 8)
            {
                cout << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }

            else
            {
                cout << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }
        }
    }


    

}

void nameSort()
{
    
     vector<Patients> patients;
    string lines,name,ageStr,date,place;
    string Fever,Tiredness,Headache,Conjunctivitis,Diarrhea,AchesPains,SoreThroat,DryCough,LossTasteSmell,SkinProbs,BreathingProbs,ChestPainPressure,LossSpeechMovement;
    int age;

    int numOfLines = 0;
    ifstream datafile("data.txt");


    //grabbing data from file, creating an object of class Patients and appending to an array
    while (getline(datafile,lines))
    {
        stringstream ss(lines);

        getline(ss,name,',');
        getline(ss,ageStr,','); //age stored into string
        age = stoi(ageStr); //Stoi = casting variable, converting to int
        getline(ss,date,',');
        getline(ss,place,'%');
        getline(ss,Fever,',');
        getline(ss,Tiredness,',');
        getline(ss,Headache,',');
        getline(ss,Conjunctivitis,',');
        getline(ss,Diarrhea,',');
        getline(ss,AchesPains,'&');
        getline(ss,SoreThroat,',');
        getline(ss,DryCough,',');
        getline(ss,LossTasteSmell,',');
        getline(ss,SkinProbs,'$');
        getline(ss,BreathingProbs,',');
        getline(ss,ChestPainPressure,',');
        getline(ss,LossSpeechMovement,',');


        Patients temp("0",0,"0","0","0","0","0","0","0","0","0","0","0","0","0","0","0");
        temp.setName(name);
        temp.setAge(age);
        temp.setDate(date);
        temp.setLocation(place);
        temp.setFever(Fever);
        temp.setTiredness(Tiredness);
        temp.setHeadache(Headache);
        temp.setConjunctivitis(Conjunctivitis);
        temp.setDiarrhea(Diarrhea);
        temp.setAchesPains(AchesPains);
        temp.setSoreThroat(SoreThroat);
        temp.setDryCough(DryCough);
        temp.setLossTasteSmell(LossTasteSmell);
        temp.setSkinProbs(SkinProbs);
        temp.setBreathingProbs(BreathingProbs);
        temp.setChestPainPressure(ChestPainPressure);
        temp.setLossSpeechMovement(LossSpeechMovement);
        
        patients.push_back(temp);

        numOfLines++;

    }

    int i,j;
    //bubble sort
    bool swapped = false;

    for(int i = 0; i < numOfLines; i++)
    {
        swapped = false;
        for(int j = 0; j < numOfLines-1; j++)
        {
            if(patients[j].getName() > patients[j+1].getName())
            {
                
                swap(&patients[j],&patients[j+1]);
                swapped = true;           
            }
        }
        if(swapped == false)
        {
            break;
        }
        
    }

    //printing 
    cout << "Name\t\t" << "Age\t\t" << "Date\t\t" << "Location\t" << "Symptoms" << "\n";
    for(int i = 0; i < numOfLines; i++)
    {
        if(name.length() < 8 ) //for neater CLI
        {
            if(place.length() < 8)
            {
                cout << "\n" << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }

            else
            {
                cout << "\n" << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }
            
        }

        else
        {
            if(place.length() < 8)
            {
                cout << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }

            else
            {
                cout << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }
        }
    }

}

void ageSort()
{

    vector<Patients> patients;
    string lines,name,ageStr,date,place;
    string Fever,Tiredness,Headache,Conjunctivitis,Diarrhea,AchesPains,SoreThroat,DryCough,LossTasteSmell,SkinProbs,BreathingProbs,ChestPainPressure,LossSpeechMovement;
    int age;

    int numOfLines = 0;
    ifstream datafile("data.txt");


    //grabbing data from file, creating an object of class Patients and appending to an array
    while (getline(datafile,lines))
    {
        stringstream ss(lines);

        getline(ss,name,',');
        getline(ss,ageStr,','); //age stored into string
        age = stoi(ageStr); //Stoi = casting variable, converting to int
        getline(ss,date,',');
        getline(ss,place,'%');
        getline(ss,Fever,',');
        getline(ss,Tiredness,',');
        getline(ss,Headache,',');
        getline(ss,Conjunctivitis,',');
        getline(ss,Diarrhea,',');
        getline(ss,AchesPains,'&');
        getline(ss,SoreThroat,',');
        getline(ss,DryCough,',');
        getline(ss,LossTasteSmell,',');
        getline(ss,SkinProbs,'$');
        getline(ss,BreathingProbs,',');
        getline(ss,ChestPainPressure,',');
        getline(ss,LossSpeechMovement,',');



        Patients temp("0",0,"0","0","0","0","0","0","0","0","0","0","0","0","0","0","0");
        temp.setName(name);
        temp.setAge(age);
        temp.setDate(date);
        temp.setLocation(place);
        temp.setFever(Fever);
        temp.setTiredness(Tiredness);
        temp.setHeadache(Headache);
        temp.setConjunctivitis(Conjunctivitis);
        temp.setDiarrhea(Diarrhea);
        temp.setAchesPains(AchesPains);
        temp.setSoreThroat(SoreThroat);
        temp.setDryCough(DryCough);
        temp.setLossTasteSmell(LossTasteSmell);
        temp.setSkinProbs(SkinProbs);
        temp.setBreathingProbs(BreathingProbs);
        temp.setChestPainPressure(ChestPainPressure);
        temp.setLossSpeechMovement(LossSpeechMovement);
        
        patients.push_back(temp);

        numOfLines++;

    }


    int i,j;
    //bubble sort
    bool swapped = false;

    for(int i = 0; i < numOfLines; i++)
    {
        swapped = false;
        for(int j = 0; j < numOfLines-1; j++)
        {
            if(patients[j].getAge() > patients[j+1].getAge())
            {
                
                swap(&patients[j],&patients[j+1]);
                swapped = true;           
            }
        }
        if(swapped == false)
        {
            break;
        }
        
    }

    //printing 
    cout << "Name\t\t" << "Age\t\t" << "Date\t\t" << "Location\t" << "Symptoms" << "\n";
    for(int i = 0; i < numOfLines; i++)
    {
        if(name.length() < 8 ) //for neater CLI
        {
            if(place.length() < 8)
            {
                cout << "\n" << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }

            else
            {
                cout << "\n" << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }
            
        }

        else
        {
            if(place.length() < 8)
            {
                cout << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }

            else
            {
                cout << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }
        }
    }

}

void locationSort()
{
    vector<Patients> patients;
    string lines,name,ageStr,date,place;
    string Fever,Tiredness,Headache,Conjunctivitis,Diarrhea,AchesPains,SoreThroat,DryCough,LossTasteSmell,SkinProbs,BreathingProbs,ChestPainPressure,LossSpeechMovement;
    int age;

    int numOfLines = 0;
    ifstream datafile("data.txt");


    //grabbing data from file, creating an object of class Patients and appending to an array
    while (getline(datafile,lines))
    {
        stringstream ss(lines);

        getline(ss,name,',');
        getline(ss,ageStr,','); //age stored into string
        age = stoi(ageStr); //Stoi = casting variable, converting to int
        getline(ss,date,',');
        getline(ss,place,'%');
        getline(ss,Fever,',');
        getline(ss,Tiredness,',');
        getline(ss,Headache,',');
        getline(ss,Conjunctivitis,',');
        getline(ss,Diarrhea,',');
        getline(ss,AchesPains,'&');
        getline(ss,SoreThroat,',');
        getline(ss,DryCough,',');
        getline(ss,LossTasteSmell,',');
        getline(ss,SkinProbs,'$');
        getline(ss,BreathingProbs,',');
        getline(ss,ChestPainPressure,',');
        getline(ss,LossSpeechMovement,',');


        Patients temp("0",0,"0","0","0","0","0","0","0","0","0","0","0","0","0","0","0");
        temp.setName(name);
        temp.setAge(age);
        temp.setDate(date);
        temp.setLocation(place);
        temp.setFever(Fever);
        temp.setTiredness(Tiredness);
        temp.setHeadache(Headache);
        temp.setConjunctivitis(Conjunctivitis);
        temp.setDiarrhea(Diarrhea);
        temp.setAchesPains(AchesPains);
        temp.setSoreThroat(SoreThroat);
        temp.setDryCough(DryCough);
        temp.setLossTasteSmell(LossTasteSmell);
        temp.setSkinProbs(SkinProbs);
        temp.setBreathingProbs(BreathingProbs);
        temp.setChestPainPressure(ChestPainPressure);
        temp.setLossSpeechMovement(LossSpeechMovement);
        
        patients.push_back(temp);

        numOfLines++;

    }

    int i,j;
    //bubble sort
    bool swapped = false;

    for(int i = 0; i < numOfLines; i++)
    {
        swapped = false;
        for(int j = 0; j < numOfLines-1; j++)
        {
            if(patients[j].getLocation() > patients[j+1].getLocation())
            {
                
                swap(&patients[j],&patients[j+1]);
                swapped = true;           
            }
        }
        if(swapped == false)
        {
            break;
        }
        
    }
    
    //printing 
    cout << "Name\t\t" << "Age\t\t" << "Date\t\t" << "Location\t" << "Symptoms" << "\n";
    for(int i = 0; i < numOfLines; i++)
    {
        if(name.length() < 8 ) //for neater CLI
        {
            if(place.length() < 8)
            {
                cout << "\n" << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }

            else
            {
                cout << "\n" << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }
            
        }

        else
        {
            if(place.length() < 8)
            {
                cout << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }

            else
            {
                cout << patients[i].getName() << "\t\t" << patients[i].getAge() << "\t\t" << patients[i].getDate() << "\t" << patients[i].getLocation() << "\t" << patients[i].getFever() << "," << patients[i].getTiredness() << "," << patients[i].getHeadache() << "," << patients[i].getConjunctivitis() << "," << patients[i].getDiarrhea() << "," << patients[i].getAchesPains() << "," << patients[i].getSoreThroat() << "," << patients[i].getDryCough() << "," << patients[i].getLossTasteSmell() << "," << patients[i].getSkinProbs() << "," << patients[i].getBreathingProbs() << "," << patients[i].getChestPainPressure() << "," << patients[i].getLossSpeechMovement() << "\n"; 
            }
        }
    }
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
    cout << "----------------------" << endl;

    switch(selectSort)
    {
        case 1:
            {
                nameSort();
                break;
            }
        case 2:
            {
                ageSort();
                break;
            }
        case 3:
            {
                dateSort();
                break;
            }

        case 4:
            {
                locationSort();
                break;
            }
        case 5:
            {
                break;
            }
    }
}



//-------------MAIN FUNCTIONS -----------------------------//

void addPatients(string name,int age, string date, string location, string Fever, string Tiredness, string Headache, string Conjunctivitis, string Diarrhea, string AchesPains, string SoreThroat, string DryCough, 
        string LossTasteSmell, string SkinProbs, string BreathingProbs, string ChestPainPressure, string LossSpeechMovement)
{
    
    ofstream foutput;
    ifstream finput;
 
    finput.open("data.txt");

    if ( finput.peek() == std::ifstream::traits_type::eof() ) //if file is empty
    {
        
        foutput.open("data.txt");

        if(finput.is_open())
        {
            foutput << name << "," << age << "," << date << "," << location << "% " << Fever << " " << Tiredness << " " << Headache << " " << Conjunctivitis << " " << Diarrhea << " " << AchesPains << " & " << SoreThroat << " " << DryCough << " " << LossTasteSmell << " " << SkinProbs << " $ " << BreathingProbs << " " << ChestPainPressure << " " << LossSpeechMovement;
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
            foutput << "\n" << name << "," << age << "," << date << "," << location << "% " << Fever << " " << Tiredness << " " << Headache << " " << Conjunctivitis << " " << Diarrhea << " " << AchesPains << " & " << SoreThroat << " " << DryCough << " " << LossTasteSmell << " " << SkinProbs << " $ " << BreathingProbs << " " << ChestPainPressure << " " << LossSpeechMovement;
        }

        finput.close();
        foutput.close();
    }
    
}


//kalo pake ini ntar pemisah addPatients nya space aja khusus bagian symptoms
//symptomsnya kyknya ilangin aja di viewPatients di ganti status kalo ini udh jadi
/*int calculateSymptoms()
{
    ifstream datafile("data.txt");
    
    string Fever, SoreThroat, BreathingProbs;
    
    string line;
    
    int total = 0;
    
    while(getline(datafile,line))
    {
        stringstream ss(line); //Used for breaking words

        //Note: Na, jadi gw tambahin symbol sesudah lokasi ya, jadi nama umur date lokasi gw taro satu variable temp, sisanya symptoms
        string temp;
        
        //gtau ini perlu ato gak kalo gak perlu apus aja gak ngerti gw -cen

        // getline(ss,temp,'%') // semua yg bukan symptoms masuk ke variable temp
        
        // 3 points
        int low = 0;
        getline(ss,Fever,'&');
        while (ss >> line)
        {
            if (line=="Y")
                low += 3;
        }
        return low;
        
        total += low;
        
        
        // 5 points
        int med = 0;
        getline(ss,SoreThroat, '$');
        while (ss >> line)
        {
            if (line=="Y")
                med += 5;
        }
        return med;
        
        total += med;
        
        //getline(ss,BreathingProbs,'');
    
    }
    datafile.close();
    return total;
}*/

int calculateSymptoms()
{
    ifstream datafile("data.txt");
    
    string temp, low, med, high;
    
    string line, words;
    
    //int total = 0;
    int total = 0;
    
    while(getline(datafile,line))
    {
        stringstream ss(line); //Used for breaking words
        
        getline(ss, temp, '%'); // temporary storing yg bukan symptoms
        
        // symptoms 3 points
        getline(ss,low,'&');
        while (ss >> line)
        {
            if (line == "Y")
                total++;
        }
    }
    datafile.close();
    return total*3;
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
        cout << "Name\t\t" << "Age\t\t" << "Date\t\t" << "Location\t" << "Symptoms" << endl;

        

        string name,place,date;
        string Fever,Tiredness,Headache,Conjunctivitis,Diarrhea,AchesPains,SoreThroat,DryCough,LossTasteSmell,SkinProbs,BreathingProbs,ChestPainPressure,LossSpeechMovement;
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
            getline(ss,place,'%');
            getline(ss,Fever,',');
            getline(ss,Tiredness,',');
            getline(ss,Headache,',');
            getline(ss,Conjunctivitis,',');
            getline(ss,Diarrhea,',');
            getline(ss,AchesPains,'&');
            getline(ss,SoreThroat,',');
            getline(ss,DryCough,',');
            getline(ss,LossTasteSmell,',');
            getline(ss,SkinProbs,'$');
            getline(ss,BreathingProbs,',');
            getline(ss,ChestPainPressure,',');
            getline(ss,LossSpeechMovement,',');

            if(name.length() < 8 ) //for neater CLI
            {
                cout << "\n" << name << "\t\t" << age << "\t\t" << date << "\t" << place << "\t\t" << Fever << "," << Tiredness << "," << Headache << "," << Conjunctivitis << "," << Diarrhea << "," << AchesPains << "," << SoreThroat << "," << DryCough << "," << LossTasteSmell << "," << SkinProbs << "," << BreathingProbs << "," << ChestPainPressure << "," << LossSpeechMovement << "\n"; 
            }

            else
            {
                cout << "\n" << name << "\t" << age << "\t\t" << date << "\t" << place << "\t\t" << Fever << "," << Tiredness << "," << Headache << "," << Conjunctivitis << "," << Diarrhea << "," << AchesPains << "," << SoreThroat << "," << DryCough << "," << LossTasteSmell << "," << SkinProbs << "," << BreathingProbs << "," << ChestPainPressure << "," << LossSpeechMovement << "\n";
            }
            

        }

        datafile.close();
        selectSort();
    }
    

}
