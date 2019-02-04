// Lab 6c
 
//#include "stdafx.h"
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//// Function prototype 
//int getChoice(int min, int max);
//
///*****      main        *****/
//int main()
//{
//  int min, max, choice;
//  cout << "What is the min?\n";
//  cin >> min;
//  cout << "What is the max?\n";
//  cin >> max; 
//  cout << "Enter an integer between " << min << " and " << max << endl; 
//
//  // WRITE A LINE OF CODE TO CALL THE getChoice FUNCTION AND TO ASSIGN THE VALUE IT TRETURNS TO THE choice VARIABLE. 
//  choice = getChoice(min, max);
//  cout << "You entered " << choice << endl;
//
//  system("pause");
//  return 0;
//}
//
///*****      getChoice       *****/
//int getChoice(int min, int max)
//{
//  int input;
//
//  // Get and validate the input 
//  
//  cin >> input;
//  while (input < min || input > max)
//  {
//      cout << "Invalid input. Enter an integer between the min and max: ";
//      cin >> input;
//  }
//  
//  return input;
//}


// Lab 6d
// This menu-driven program lets the user convert pounds to kilograms and kilograms to pounds. 
#include "pch.h"
#include <iostream>
using namespace std;
 
// Function prototypes
// WRITE PROTOTYPES FOR THE displayMenu, getChoice, kilosToPounds and poundsToKilos FUNCTIONS HERE 
void displayMenu();
int getChoice(int min, int max);
void kilosToPounds();
void poundsToKilos();
 
/*****      main        *****/
int main()
{
    int choice, min = 1, max = 3;
    char doAgain = 'Y';
    {
        // Declare any variables main uses here 
        do
        {
            displayMenu();
            choice = getChoice(min, max);
            {
                if (choice == 1)
                {
                    kilosToPounds();
                }
                if (choice == 2)
                {
                    poundsToKilos();
                }
                if (choice == 3)
                {
                    exit(0);
                }
            }
            cout << "Do you want to do it again? ";
            cin >> doAgain;
        } while (doAgain == 'Y' || doAgain == 'y');
    }
 
    // write the code here to carry out the steps required by the program specifications 
    system("pause");
    return 0;
}
 
/*****      displayMenu         *****/
void displayMenu()
{
    cout << "1. Convert kilograms to pounds\n";
    cout << "2. Convert pounds to kilograms\n";
    cout << "3. Quit\n";
}
 
/*****      getChoice       *****/
int getChoice(int min, int max)
{
    int input;
 
    // Get and validate the input 
 
    cin >> input;
    while (input < min || input > max)
    {
        cout << "Invalid input. Enter an integer between " << min << " and " << max << ": ";
        cin >> input;
    }
 
    return input;
}
 
 
/*****      kilosToPounds       *****/
// write kilosToPounds function here 
void kilosToPounds()
{
    double kilos, pounds;
    cout << "Weight to be converted: ";
    cin >> kilos;
    pounds = kilos * 2.2;
    cout << kilos << " kilograms = " << pounds << " pounds.\n\n";
    displayMenu();
}
// it receives a weight in kilos and must calculate and return the equivalent number of pounds 
 
/*****      poundsToKilos       *****/
// write poundsToKilos function here 
void poundsToKilos()
{
    double pounds, kilos;
    cout << "Weight to be converted: ";
    cin >> pounds;
    kilos = pounds / 2.2;
    cout << pounds << " pounds = " << kilos << " kilograms.\n\n";
    displayMenu();
}
// it receives a weight in pounds and must calculate and return the equivalent number of kilos
