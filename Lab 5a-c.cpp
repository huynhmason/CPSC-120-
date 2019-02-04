// Lab 5a.cpp : Defines the entry point for the console application.
//
 
/*#include "stdafx.h"
#include <iostream> 
#include <cmath>
 
using namespace std;*/
 
// Lab 5a
//int main()
//{
//  int a = 5, b = 5,
//      c = 3, d = 7; 
//
//  cout << a-- << ' '; 
//  cout << a << ' '; 
//  cout << a-- << ' ' << a-- << ' '; 
//  cout << a-- << ' ' << a << endl; 
//
//  cout << ++b << ' '; 
//  cout << b << ' ';
//  cout << ++b << ' ' << ++b << ' '; 
//  cout << ++b << ' ' << b << endl; 
//
//  a = c++ * d--; 
//  cout << a << "  " << c << ' ' << d << endl; 
//
//  system("pause");
//    return 0;
//
//} 
 
// Lab 5b
//int main()
//{
//  int i,  // Loop control variable 
//      sum; // Accumulator 
//
//  i = 1; 
//  while (i < 10)
//  {
//      cout << i << ' '; 
//      i += 2;
//  }
//  cout << "\nAfter loop i = " << i << endl << endl; 
//
//  i = 5;
//  while (i > 0)
//      cout << i-- << ' ';
//  cout << "\nAfter loop i = " << i << endl << endl;
//
//  i = 1; 
//  do
//  {
//      cout << i * i << ' '; 
//      i++; 
//  } while (i <= 3); 
//  cout << "\nAfter loop i = " << i << endl << endl; 
//
//  sum = 0; 
//  for (i = 0; i < 4; i++)
//      sum += i; 
//  cout << "After loop i = " << i << endl; 
//  cout << "sum = " << sum << endl << endl; 
//
//  for (i = 0; i++ < 4;)
//      cout << i << ' '; 
//  cout << "\nAfter loop i = " << i << endl; 
//
//  system("pause"); 
//  return 0; 
//}
 
// Lab 5c 
// This progam finds the average number of boxes of cookies sold by children in a particular scout troop. 
// It illustrates the use of a counter, an accumulator, and an end sentinel. 
// other PREPROCESSOR DIRECTIVES AT THE TOP 
 
#include "stdafx.h"
#include <iostream> 
#include <cmath>
 
using namespace std;
int main()
{
    int numBoxes,       // Number of boxes of cookies sold by one child 
        totalBoxes,     // Accumulates total boxes sold by the entire troop
        numSeller;      // Counts the number of children selling cookies
 
    double averageBoxes; // Average number of boxes sold per child 
 
    totalBoxes = 0; 
    numSeller = 1; 
 
    cout << "             **** Cookie Sales Information **** \n\n"; 
  
    cout << "Enter number of boxes of cookies sold by seller " << numSeller << " (or -1 to quit): "; 
    cin >> numBoxes; 
     
    while (numBoxes != -1)
    {
        while (numBoxes < -1)
        {
            cout << "Invalid entry. Please enter a valid number. ";
            cin >> numBoxes;
        }
        totalBoxes += numBoxes; 
        numSeller++; 
 
        cout << "Enter number of boxes of cookies sold by seller " << numSeller << " (or -1 to quit): ";
        cin >> numBoxes; 
    }
    numSeller -= 1;
 
    if (numSeller == 0)         // If true, -1 was the very first entry 
        cout << "\nNo boxes were sold. \n"; 
    else
    {
        averageBoxes = (static_cast<double>(totalBoxes) / numSeller); 
        cout << "The average number of boxes sold by the " << numSeller << " sellers was " << averageBoxes << '.' << endl; 
    }
 
    system("pause"); 
    return 0; 
}
