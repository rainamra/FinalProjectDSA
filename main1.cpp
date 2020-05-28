#include <iostream>
#include "header1.h"
#include <map>
#include <iterator>

using namespace std;


//COMMAND LINE INTERFACE

/*

CLI PLAN:

1. ADD PATIENT
    - Enter Name:
    - Enter Age: 
    - Enter Location: 
    - Enter Date of Admission: dd/mm/yy
    - Enter Symptoms: 

2. REMOVE PATIENT
    - Enter Name: 
    - Reason of Discharge: (death / cured)
    - Enter Date of Discharge: dd/mm/yy

3. VIEW PATIENTS
    - Visually printed table of patient data
    - Default is ordered alphabetically by name
    - Option to chose sorting
    - Sort by Age, Sort by Location, Sort by Date, Sort by Symptoms, Sort by Severity
    
    
*/

int main()
{

    
    bool start = true;
    while(start)
    {
        cout << "----------------------" << endl;
        cout << "nCovid-19 Data System" <<endl;
        cout << "----------------------" << endl;
        cout << "1. Add Patient" << endl;
        cout << "2. Remove Patient" << endl;
        cout << "3. View Patients" << endl;
        cout << "4. Exit" << endl;
        cout << "----------------------" << endl;

        cout << "Selection: ";
        int selection;
        cin >> selection;
        cout << "----------------------" << endl;


        switch(selection)
        {
            case 1:
                {
                    string patientName,location,date;
                    int patientAge;


                    cout << "Enter Patient Name: ";
                    cin >> patientName;
                    cout << "Enter Patient Age: ";
                    cin >> patientAge;
                    cout << "Enter date (dd/mm/yyy): ";
                    cin >> date;
                    cout << "Enter Location: ";
                    cin >> location;
  

                    addPatients(patientName,patientAge,date,location);
                    break;
                }

            case 2:
                {


                }
            case 3:
                {
                    viewPatients();
                    selectSort();
                    break;
                    
                    
                }

            case 4:
                {
                    start = false;
                    break;
                }

            default:
                cout << "Selection does not exist" << endl;
                break;
        }

    }
    




}