// Lab 3c percentage.cpp 
// This program will determine the percentage of answers a student got correct on a test. 
 
// INCLUDE ANY FILES NEEDED TO DO I/O, FORMAT, ETC. 
 
#include "stdafx.h"
#include <iostream>
#include <string> 
#include <iomanip>
 
using namespace std; 
 
int main()
{
    string name; 
    int numQuestions,
        numCorrect; 
    double percentage; 
 
    // Get student's test data 
    cout << "Enter student's first and last name: "; 
    getline(cin, name);
    // WRITE A STATEMENT TO READ THE WHOLE NAME INTO THE name VARIABLE. 
 
    cout << "Number of questions on the test: ";
    cin >> numQuestions; 
    cout << "Number of answers the student got correct: "; 
    cin >> numCorrect; 
 
    // Compute and display the student's % correct 
    // WRITE A STATEMENT TO COMPUTE THE % AND ASSIGN THE RESULT TO percentage. 
    percentage = (static_cast<double>(numCorrect) / numQuestions) * 100;
 
    // WRITE STATEMENTS TO DISPLAY THE STUDENT'S NAME AND THEIR TEST 
    // PERCENTAGE WITH ONE DECIMAL POINT
 
    cout << name << " " << fixed << setprecision(1)<< percentage << "%" << endl;
 
    system("pause"); 
    return 0; 
 
}
