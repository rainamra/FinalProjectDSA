#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool compare(string a, string b) // compare fuction to sort array of dates
{
    //ex: 11/10/2020

    //compare year
    string str1 = a.substr(6,4);
    string str2 = b.substr(6,4);

    //compare month
    string month_a = a.substr(3,2);
    string month_b = b.substr(3,2);

    //compare day
    string day_a = a.substr(0,2);
    string day_b = b.substr(0,2);

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

    // sort(date.begin() , date.end(), compare);

    // printDates(date , m);

    printDates(date,m-1);
    
    int year1;
    year1 = stoi(date[0].substr(6,4));
    cout << year1 << endl;

    // for(int i = 0; i < m;i++)
    // {
    //     for(int j = i+1;j<m;j++)
    //     {
    //         if()
    //     }
    // }

}