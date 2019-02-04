// Mason Huynh
// CWID: 6398 
// Lab # 1
// 12--Friday; Position ID# 43 
// September 14, 2018 
 
/*
#include "pch.h"
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string f_name, l_name;  // This declares variables to hold the user's first and last names
 
    // Get the user's first name
    cout << "Please enter your first name: ";
    cin >> f_name;
 
    // Get the user's last name
    cout << "Please enter your last name: ";
    cin >> l_name;
 
    // Print the user's full name embedded inside a message
    cout << "Hello, " << f_name << " " << l_name << ", it\'s nice to meet you!" << endl;
 
    system("Pause");
    return 0;
}
*/
 
// Lab 1b
// average.cpp 
// This program finds the average of two numbers. 
// It contains two errors that must be fixed. 
 
 
#include "pch.h"
#include <iostream>
using namespace std;
 
int main()
{
    int size = 2;       // The number of values to be averaged
    double num1,
        num2,
        average;            // Average of num1 and num2
 
     // Get the two numbers
        cout << "Enter two numbers separated by one or more spaces: ";
        cin >> num1 >> num2;
 
    // Calculate the average
    average = (num1 + num2) / size;
 
    // Display the average
    cout << "The average of the two numbers is: " << average << endl;
 
    system("Pause");
    return 0;
}
