// Lab 4e-g.cpp : Defines the entry point for the console application.
// Lab 4e 
 
#include "stdafx.h"
#include <iostream> 
#include <string> 
using namespace std; 
 
/*
int main()
{
    string pet;     // "cat" or "dog" 
    char spayed;    // 'y' or 'n' 
 
     
    cout << "Enter the pet type (cat or dog) : "; 
    cin  >> pet; 
    if (pet == "cat" || pet == "dog")
    {
        cout << "Has the pet been spayed or neutered (y/n)? ";
        cin >> spayed;
    }
    if (pet == "cat")
    {   if (spayed == 'y' || spayed == 'Y')
            cout << "Fee is $4.00 \n";
    // If I want to trap the error, make next statement else if (spayed == 'n' || 'N'), and then add else cout << "error"; 
        else 
            cout << "Fee is $8.00 \n";
    }
    else if (pet == "dog")
    {   if (spayed == 'y' || spayed == 'Y')
            cout << "Fee is $6.00 \n";
        else
            cout << "Fee is $12.00 \n";
    }
    else
        cout << "Only cats and dogs need pet tags. \n"; 
         
    system("pause"); 
    return 0;
}
*/
 
// Lab 4f 
 
int main()
{
    int choice;     // Menu choice should be 1, 2, or 3 
 
                    // Display the menu of choices
    cout << "Choose a primary color by entering its number. \n\n";
    cout << "1 Red \n" << "2 Blue \n" << "3 Yellow \n";
 
    // Get the user's choice 
    cin >> choice;
 
    // Tell the user what he or she picked 
    if (choice == 1) // Repalce if/else if with switch statement 
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
