// Lab 4.cpp : Defines the entry point for the console application.
 
#include "stdafx.h"
#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip>
using namespace std;
 
 
 
//// Blue and yellow will be assigned default values 2 and 3, respectively.
//int main()
//{
//char choice;     // Menu choice should be 1, 2, or 3
//
//// Display the menu of choices
//cout << "Choose a primary color by entering its number. \n\n";
//cout << "1 Red \n" << "2 Blue \n" << "3 Yellow \n";
//
//// Get the user's choice
//cin >> choice;
//
//// Tell the user what he or she picked
//switch (choice) // Repalce if/else if with switch statement
//{
//case '1':       cout << "\nYou picked red.\n";
//break;
//case '2':      cout << "\nYou picked blue.\n";
//break;
//case '3':    cout << "\nYou picked yellow.\n";
//break;
//default:        cout << "\You must choose 1, 2, or 3.\n";
//}
//system("pause");
//return 0;
//}
 
 
 
int main()
{
    int choice; 
    const double PI = 3.14159;
    double side, radius, base, height;
 
    cout << "Program to calculate areas of objects\n\n";
 
    cout << setw(20) << "1 -- square\n";
    cout << setw(20) << "2 -- circle\n";
    cout << setw(28) << "3 -- right triangle\n";
    cout << setw(18) << "4 -- quit\n";
 
    cin >> choice;
 
    if (choice == 1)
    {
        cout << "Side of square: ";
        cin >> side;
        cout << "\nArea of square: " << pow(side, 2) << endl;
    }
    else if (choice == 2)
    {
        cout << "Radius of circle: ";
        cin >> radius;
        cout << "Area = " << PI * pow(radius, 2) << endl;
    }
    else if (choice == 3)
    {
        cout << "Enter base and height of triangle separated by a space. ";
        cin >> base >> height;
        cout << "Area = " << (base * height) / 2 << endl;
    }
    else if (choice == 4)
        cout << "quit\n";
    else
        cout << "ERROR\n"; 
 
system("pause");
return 0;
}
