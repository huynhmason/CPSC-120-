// Lab 5d.cpp
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    char choice = 'y';
    int denom;
    double sum = 0.0;
    int n = 2;
 
    cout << "Mason Huynh \n";
    cout << "This program sums the series 1/2^1 + 1/2^2 + 1/2^3 + . . . + 1/2^n \n\n";
 
    while (choice == 'Y' || choice == 'y')
    {
        cout << "What should n be in the final term (2 - 10)?\n";
        cin >> n;
        // program explodes for invalid data type
 
        while (n < 2 || n > 10)
        {
            cout << "Please enter a valid value for n ";
            cin >> n;
        }
 
        sum = 0.0;
        for (denom = 2; n > 0; denom *= 2)
        {
            n--;
            sum += (1 / static_cast<double>(denom));
            if (n > 0)
                cout << "1/" << denom << " + ";
            else
                cout << "1/" << denom << " = " << sum << endl;
        }
 
        cout << "\nDo you want to do another summation? (y/n) " << endl;
        cin >> choice;
        if (choice == 'Y' || choice == 'y')
            cout << endl;
        else if (choice == 'N' || choice == 'n')
        {
            system("pause");
            return 0;
        }
        else
        {
            cout << " Please enter Y or N. " << endl;
            cin >> choice;
        }
        // After invalid input entered twice, program exits. Why? 
    }
     
}
