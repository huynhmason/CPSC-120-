// lab 8a-d.cpp : Defines the entry point for the console application.
// lab 8a
/*
#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
const int SIZE = 17;
int array[SIZE];
 
cout << "Number Square 2 Raised to the n\n";
 
for (int i = 0; i < 17; i++)
{
array[i] = i;
cout << setw(6) << array[i] << setw(6) << pow(array[i], 2) << setw(11) << pow(2, array[i]) << endl;
// was supposed to use three arrays, not one
}
 
system("pause");
return 0;
}
*/
 
/*
// lab 8b
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
 
// write a progarm that uses two arrays to store the months of the year and the days each contains
int main()
{
const int SIZE = 13;
int month, year;
 
int array[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string array2[13] = { " ", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
 
cout << "Which month would you like to choose? (Please choose a number between 1 and 12): ";
cin >> month;
// trapping invalid inputs
while (month < 1 || month > 12)
{
cout << "Please enter a number between 1 and 12. ";
cin >> month;
}
// if input == february
if (month == 2)
{
cout << "What is the year? ";
cin >> year;
// if february is possibly in a leap year
if (year % 4 == 0)
{
if (year % 100 == 0 && year % 400 != 0)
cout << "February has " << array[2] << " days." << endl;
else
cout << "February has " << array[2] + 1 << " days." << endl;
}
else // if february is not in a leap year
cout << "February has " << array[2] << " days." << endl;
}
else // every other month of the year
{
cout << array2[month] << " has " << array[month] << " days. ";
}
 
system("pause");
return 0;
}
*/
 
// Lab 8c 
//#include "stdafx.h"
//#include <iostream> 
//
//using namespace std;
//
//int main()
//{
//  const int SIZE = 5;
//  int array1[SIZE], array2[SIZE];
//  char choice = 'y';
//  bool isequals = true;
//
//  for (int i = 0; i < 5; ++i)
//  {
//      cout << "Enter 5 elements into the first array: \n";
//      cin >> array1[i];
//  }
//
//  for (int i = 0; i < 5; ++i)
//  {
//      cout << "Enter 5 elements into the second array: \n";
//      cin >> array2[i];
//  }
//
//  cout << "Would you like to compare the first array's contents to the second's array's contents (y/n)? ";
//  cin >> choice;
//  cout << endl;
//
//  if (choice == 'y' || choice == 'Y')
//  {
//      cout << "First array" << endl;
//      for (int i = 0; i < 5; i++)
//          cout << array1[i] << endl;
//
//      cout << endl;
//
//      cout << "Second array" << endl;
//      for (int i = 0; i < 5; i++)
//          cout << array2[i] << endl;
//
//      for (int i = 0; i < 5; i++)
//      {
//          if (array1[i] != array2[i])
//              isequals = false;
//      }
//      if (isequals == false)
//          cout << "The arrays are not equal to each other. ";
//      else
//          cout << "The arrays are equal to each other. ";
//  }
//
//  system("pause");
//  return 0;
//}
 
// Lab 8d 
 
//#include "stdafx.h"
//#include <string>
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//  const int SIZE = 5;
//  string choice;
//  int array1[SIZE], array2[SIZE];
//
//  for (int i = 0; i < 5; i++)
//  {
//      cout << "Please enter 5 numbers, one at a time, for the first array: ";
//      cin >> array1[i];
//  }
//
//  cout << endl; 
//
//  for (int i = 0; i < 5; i++)
//  {
//      cout << "Please enter 5 numbers, one at a time, for the second array: ";
//      cin >> array2[i];
//  }
//
//  for (int i = 0; i < 5; i++)
//  {
//      cout << array1[i] << "   " << array2[i] << endl;
//  }
//
//  cout << "Would like to copy the numbers from the first array into the second array? (Y/N): ";
//  cin >> choice;
//
//  if (choice == "y" || choice == "Y")
//  {
//      cout << "You copied the numbers you entered from the first array into the second array. " << endl;
//      cout << "The original second array: " << endl;
//      for (int i = 0; i < 5; i++)
//      {
//          cout << array1[i] << "   " << array2[i] << endl;
//      }
//
//      cout << "The new second array: " << endl;
//
//      for (int i = 0; i < 5; i++)
//      {
//          array2[i] = array1[i];
//          cout << array1[i] << "   " << array2[i] << endl;
//      }
//
//  }
//  else
//      cout << "You did not copy the arrays. " << endl;
//
//  system("pause");
//  return 0;
//}
// lab 8e
 
//#include "stdafx.h"
//#include <string>
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//bool palindrome(int[]);
//
//int main()
//{
//  const int SIZE = 5;
//  string choice;
//  int array1[SIZE];
//
//  cout << "Please enter 5 numbers: " << endl;
//
//  for (int i = 0; i < 5; i++)
//  {
//      cout << i + 1 <<": ";
//      cin >> array1[i];
//  }
//
//  if (palindrome(array1))
//      cout << "The numbers you entered are a palindrome.\n";
//  else
//      cout << "The numbers you entered are not a palindrome.\n";
//
//  system("pause");
//  return 0;
//}
//
//bool palindrome(int array1[])
//{
//  for (int i = 0; i < 5; i++)
//  {
//      if (array1[i] != array1[4 - i])
//      {
//          return false;
//      }
//  }
//  return true;
//}
 
//lab 8f
 
#include "stdafx.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
int main()
{
    const int row = 3;
    const int column = 4;
    double total = 0.0;
    double salesarray[row][column];
 
    ifstream datain;
    datain.open("sales2.dat");
 
    cout << fixed << setprecision(2);
 
    if (!datain)
    {
        cout << "Oops! Cannot open the file. Perhaps you do not have it. " << endl;
    }
    else
    {
        cout << "Quarterly Sales by Division" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                datain >> salesarray[i][j];
                cout << "Division " << i + 1 << ", Quarter " << j + 1 << ": $" << salesarray[i][j] << endl;
                total += salesarray[i][j];
            }
        }
        cout << "The total sales for the company are: " << total << endl;
    }
 
    datain.close();
    system("pause");
    return 0;
}
