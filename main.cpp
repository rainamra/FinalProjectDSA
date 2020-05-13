#include <iostream>
#include "header.h"

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
    cout << "nCovid-19 Data System" <<endl;
    cout << "----------------------" << endl;
    cout << "1. Add Patient" << endl;
    cout << "2. Remove Patient" << endl;
    cout << "3. View Patients" << endl;
    cout << "4. Exit" << endl;

    cout << "Selection: ";
    int selection;
    cin >> selection;

    switch(selection)
    {
        case 1:

        case 2:

        case 3:

        case 4:

        default:
            cout << "Selection does not exist" << endl;
    }





}