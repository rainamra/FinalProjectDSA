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
    //MENU
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


        switch(selection) //SWITCH CASE FOR MENU SELECTION
        {
            case 1:
                {
                    string patientName,location,date,status;
                    int low,med,high,severity;
                    string fever, tiredness, headache, conjunctivitis, diarrhea, achesPains, soreThroat, dryCough, 
                    lossTasteSmell, skinProbs, breathingProbs, chestPainPressure, lossSpeechMovement;
                    int patientAge;


                    cout << "Enter Patient Name: ";
                    cin >> patientName;

                    cout << "Enter Patient Age: ";
                    cin >> patientAge;

                    cout << "Enter date (dd/mm/yyyy): ";
                    cin >> date;

                    cout << "Enter Location: ";
                    cin >> location;

                    cout << "Symptoms Check: ";
                    // 3 points
                    cout << "Fever (Y/N): ";
                    cin >> fever;
                    cout << "Tiredness (Y/N): ";
                    cin >> tiredness;
                    cout << "Headache (Y/N): ";
                    cin >> headache;
                    cout << "Conjunctivitis (Y/N): ";
                    cin >> conjunctivitis;
                    cout << "Diarrhoea (Y/N): ";
                    cin >> diarrhea;
                    cout << "Aches and Pains (Y/N): ";
                    cin >> achesPains;
                    // 5 points
                    cout << "Sore Throat (Y/N): ";
                    cin >> soreThroat;
                    cout << "Dry Cough (Y/N): ";
                    cin >> dryCough;
                    cout << "Loss of Taste or Smell (Y/N): ";
                    cin >> lossTasteSmell;
                    cout << "Rash on Skin or Discolouration of Fingers or Toes (Y/N): ";
                    cin >> skinProbs;
                    // 10 points
                    cout << "Difficulty Breathing or Shortness of Breath (Y/N): ";
                    cin >> breathingProbs;
                    cout << "Chest Pain or Pressure (Y/N): ";
                    cin >> chestPainPressure;
                    cout << "Loss of Speech or Movement (Y/N): ";
                    cin >> lossSpeechMovement;
                    
                    //CALCULATING SEVERITY POINTS & STATUS
                    low = calculateLowSymptoms(fever,tiredness,headache,conjunctivitis,diarrhea,achesPains);
                    med = calculateMedSymptoms(soreThroat,dryCough,lossTasteSmell,skinProbs);
                    high = calculateHighSymptoms(breathingProbs,chestPainPressure,lossSpeechMovement);
                    severity = low + med + high;
                    status = calculateStatus(low,med,high);
                    
  
                    //ADD
                    addPatients(patientName,patientAge,date,location, fever, tiredness, headache, conjunctivitis, diarrhea, achesPains, soreThroat, dryCough, 
                    lossTasteSmell, skinProbs, breathingProbs, chestPainPressure, lossSpeechMovement,severity,status);
                    break;
                }

            case 2:
                {
                    //REMOVE
                    string deleteline;

                    cout << "Who do you want to remove : ";
                    cin >> deleteline;

                    removePatients(deleteline);
                    break;

                }
            case 3:
                {
                    //view patients
                    viewPatients();
                    break;
                    
                }

            case 4:
                {
                    //end of loop
                    start = false;
                    break;
                }

            default:
                cout << "Selection does not exist" << endl;
                break;
        }

    }
    




}
