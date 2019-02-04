// Lab1.cpp : Defines the entry point for the console application.
// Mason Huynh
// CWID: 6398 
// Lab # 1
// 12--Friday; Position ID# 43 
// September 14, 2018 
 
/*
#include "stdafx.h"
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
 
 
// average.cpp 
// This program finds the average of two numbers. 
// It contains two errors that must be fixed. 
/*
#include "stdafx.h"
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
*/
 
 
// Lab 2a
// Mason Huynh 
// CWID: 6398 
// CPSC 120-Friday; Position ID# 43 
// September 14, 2018 
 
/*
#include "stdafx.h"
#include <iostream>
 
using namespace std;
 
int main()
{
int x = 1, y = 3;
int X = 2, Y = 4;
 
cout << "tryIt 2A" << endl;
 
cout << x << y << endl;
cout << "x" << "y" << endl;
 
cout << X << " " << Y << endl;
 
cout << 2 * x + y << endl;
 
cout << 2 * X + Y << endl;
 
//cout << " x + 2*y << endl;
 
cout << "x = ";
 
cout << x;
 
cout << " y = ";
 
cout << y << endl;;
 
system("Pause");
 
return 0;
 
}
*/
 
/*
#include "stdafx.h"
#include <iostream>
 
using namespace std;
 
int main()
{
int x = 1, y = 3;
int X = 2, Y = 4;
 
cout << "tryIt2b" << '\n';
cout << "Hello " << "endl";
cout << "Hello " << endl;
cout << "Hello /n";
cout << "Hello \\n";
cout << "Hello \n";
 
system("Pause");
return 0;
 
}
*/
 
 
// Lab 2c 
// Mason Huynh 
// CWID: 6398 
// CPSC 120-Friday; Position ID# 43 
// September 14, 2018 
 
/*
#include "stdafx.h"
#include <iostream>
 
using namespace std;
 
int main()
{
int a = 5, b = 2, answer1;
double c = 2.0, answer2;
 
cout << "tryIt2C" << endl;
cout << a + b << " " << a - b << endl;
cout << a * b << " " << a % b << endl;
cout << a / b << " " << a / c << endl;
 
answer2 = a / c;
answer1 = answer2;
cout << answer1 << " " << answer2 << endl;
 
a = a - 1;
b = a * 2;
c = a * b + c;
cout << a << " " << b << " " << c << endl;
 
system("pause");
return 0;
}
*/
 
 
// Lab 2d 
// Mason Huynh 
// CWID: 6398 
// CPSC 120-Friday; Position ID# 43
// September 14, 2018 
 
/*
#include "stdafx.h"
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string f_name, l_name, p_number, u_email; // This delcares variables to hold the user's first and last names, phone number, and email address
 
                                              // Get the user's first name
    cout << "Please enter your first name: ";
    cin >> f_name;
 
    // Get the user's last name
    cout << "Please enter your last name: ";
    cin >> l_name;
 
    // Get the user's phone number
    cout << "Please enter your phone number: ";
    cin >> p_number;
 
    // Get the user's email address
    cout << "Please enter your email address: ";
    cin >> u_email;
 
    // Print the user's full name, phone number and email embedded inside a message
    cout << endl;
 
    cout << f_name << " " << l_name << endl;
 
    cout << endl;
 
    cout << p_number << endl;
 
    cout << u_email << endl;
 
 
 
    system("pause");
    return 0;
 
}
*/
 
// Lab 2e 
// Mason Huynh 
// CWID: 6398 
// CPSC 120-Friday; Position ID# 43
// September 14, 2018 
 
 
 
#include "pch.h"
#include <iostream>
using namespace std;
 
int main()
{
    double  num1,
        num2,
        area,   // Area of num1 * num2
        small,  // number of small brownies 
        big;  //number of big brownies 
 
 
    // Enter length and width of baking pan
    cout << "Enter the length and width of the baking pan in inches separated by one or more spaces: ";
    cin >> num1 >> num2;
 
    // Blank line 
    cout << endl;
 
    // Calculate the area 
    area = num1 * num2;
 
    // Compute how many small brownies the pan will hold if each one is cut with a 1" x 1" square bottom 
    small = area;
 
    // Compute how many big brownies the pan will hold if each one is cut with a 2" x 2" square bottom 
    big = area / 4;
 
    // Display the pan dimensions, the number of small brownies, and number of big brownies the pan can hold 
    cout << "A " << num1 << " x " << num2 << "-inch pan can hold " << small << " small brownies or " << big << " big brownies." << endl;
 
    // Just realized I put in too many lines of code. Only needed to display data once 
 
    system("pause");
    return 0;
}
