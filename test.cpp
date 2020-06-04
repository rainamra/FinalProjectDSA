#include <iostream>
#include <bits/stdc++.h>

using namespace std;

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

int main()
{


    vector<string> date;
    date.push_back("24/06/2020");
    date.push_back("10/01/2020");
    date.push_back("30/04/2020");
    date.push_back("28/04/2020");
    date.push_back("01/01/2020");


    int m = date.size();

    sort(date.begin() , date.end(), compare);

    printDates(date , m);


}