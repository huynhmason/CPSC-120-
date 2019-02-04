// Lab 4a-d.cpp : Defines the entry point for the console application.
// Lab 4a
// October 5, 2018
// If I use one of Lab 4a-d as a template for another lab or assignment, don't forget about include statements, etc.
// Because I did not comment out the includes.
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
/*
int main()
{
    cout << ( 3 == 4) << endl; 
    cout << (3 == 3) << endl; 
    cout << ( 5 == 3 +2) << endl << endl;
 
    cout << (7 > 5) << endl; 
    cout << (7 > 5 +2) << endl;
    cout << (2 >= 8 % 3) << endl << endl;
 
    cout << (8 < 6) << endl; 
    cout << (3 * 5 < 2 * 9 - 1) << endl; 
    cout << (5 * 4 <= 40 / 2) << endl << endl; 
 
    cout << (3 != 5) << endl; 
    cout << (3 != 9 - 2 * 3) << endl; 
    cout << (10 != (4 * 5) / 2) << endl << endl; 
 
    system("pause"); 
    return 0;
}
*/
 
// Lab 4b 
 
/*
int main()
{
    bool hungry = true,
        sleepy = false,
        happy = true,
        lazy = false; 
 
    cout << hungry << " " << sleepy << endl; 
 
    if (hungry == true)
        cout << "I'm hungry. \n"; 
 
    if (sleepy == true)
        cout << "I'm sleepy. \n"; 
 
    if (hungry)
        cout << "I'm still hungry. \n";
    else
        cout << "I'm not hungry. \n";
 
    if (sleepy)
        cout << "I'm still sleepy. \n"; 
    else
        cout << "I'm not sleepy. \n";
 
    if (sleepy)
        cout << "I'm sleepy. \n";
    else if (lazy)
        cout << "I'm lazy. \n"; 
    else if (happy)
        cout << "I'm happy. \n";
    else if (hungry)
        cout << "I'm hungry. \n";
 
    system("pause"); 
    return 0; 
}
*/
 
// Lab 4c testNum.cpp
 
/*
int main()
{
    int score = 65;     // Initialize student's test score 
 
    if (score == 100)
        cout << "You made a perfect score. \n"; 
 
    if (score != 100)
        cout << "You needed " << 100 - score << " more points for a perfect score. \n"; 
 
    system("pause"); 
    return 0; 
}
*/
 
// This if/else statement is the same as the two if statement above. 
 
/*
int main()
{
    int score = 65; 
 
    if (score == 100)
        cout << "You made a perfect score. \n";
    else
        cout << "You needed " << 100 - score << " more points for a perfect score.\n"; 
 
    system("pause"); 
    return 0; 
}
*/
 
// Lab 4d color.cpp 
 
#include <string> 
 
int main()
{
    int choice;     // Menu choice should be 1, 2, or 3 
 
    // Display the menu of choices
    cout << "Choose a primary color by entering its number. \n\n"; 
    cout << "1 Red \n" << "2 Blue \n" << "3 Yellow \n"; 
 
    // Get the user's choice 
    cin >> choice; 
 
    // Tell the user what he or she picked 
    if (choice == 1)
        cout << "\nYou picked red.\n";
    else if (choice == 2)
        cout << "\nYou picked blue.\n";
    else if (choice == 3)
        cout << "\nYou picked yellow.\n";
    // Else statement must be last statement. If all else fails, do this. Else = if false, then do this; else if = if true, then this. Otherwise, if false, then else do that.  
    else
        cout << "\nInvalid choice.\n";
 
    system("pause"); 
    return 0; 
}
