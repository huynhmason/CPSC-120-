// ConsoleApplication3.cpp : Defines the entry point for the console application.
// Lab 3d table.cpp
// This program reads data from a file and prints it in a nicely aligned table. 
/*
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std; 
 
 
int main()
{
    string code,        // Item code of an inventory item
        description;    // Desccription of an inventory item 
    int quantity;       // Quantity in stock of an inventory item 
 
    ifstream dataIn;    // Define an input file stream object 
  
    dataIn.open("table.dat"); 
    // Print table heading 
    cout << "   Warehouse Inventory   \n"; 
    cout << "===========================\n\n";
    cout << "Item      Item           Item\n"; 
    cout << "Code    Description       Qty\n\n"; 
 
    dataIn >> code >> description >> quantity;        
    cout << left << setw(8) << code << left << setw(14) << description << right << setw(7) << quantity << endl;
 
    dataIn >> code >> description >> quantity;
    cout << left << setw(8) << code << left << setw(14) << description << right << setw(7) << quantity << endl;
 
    dataIn >> code >> description >> quantity;
    cout << left << setw(8) << code << left << setw(14) << description << right << setw(7) << quantity << endl;
 
    dataIn >> code >> description >> quantity;
    cout << left << setw(8) << code << left << setw(14) << description << right << setw(7) << quantity << endl;
 
    dataIn >> code >> description >> quantity;
    cout << left << setw(8) << code << left << setw(14) << description << right << setw(7) << quantity << endl;
     
    dataIn.close();
 
    system("pause");
    return 0;
}
*/
 
// icecream.cpp 
// Lab 3e 
 
#include "stdafx.h"
#include <iostream> 
#include <iomanip>
#include <locale>
 
using namespace std; 
 
int main()
{
    double single,
        dble,
        triple,
        singlesale,
        doublesale,
        triplesale,
        total,
        allcones;
        const double SINGLE = 1.49;
        const double DOUBLE = 2.49;
        const double TRIPLE = 3.49;
        char dollar = '$';
         
 
    cout << "Number of single scoop cones sold:  " << endl; 
    cin >> single; 
 
    cout << "Number of double scoop cones sold:  " << endl; 
    cin >> dble; 
 
    cout << "Number of triple scoop cones sold:  "; 
    cin >> triple; 
 
    cout << endl; 
 
    singlesale = SINGLE * single; 
    doublesale = DOUBLE * dble; 
    triplesale = TRIPLE * triple; 
    total = singlesale + doublesale + triplesale,
    allcones = single + dble + triple;
 
    cout << left << setw(26) << "DeLIGHTful cones" << right << setw(6) << single << right << setw(8) << setprecision(2) << fixed << dollar << setw(7) << singlesale << endl; 
    cout << left << setw(26) << "Double DeLIGHTful cones" << right << setw(6) << setprecision(0) << dble << right << setw(8) << setprecision(2) << fixed << dollar << setw(7) << doublesale << endl;
    cout << left << setw(26) << "Triple DeLIGHTful cones" << right << setw(6) << setprecision(0) << triple << right << setw(8) << setprecision(2) << fixed << dollar << setw(7) << triplesale << endl;
    cout << left << setw(26) << "Total" << right << setw(6) << setprecision(0) << allcones << right << setw(8) << setprecision(2) << fixed << dollar << setw(7) << total << endl;
 
 
    system("pause"); 
    return 0; 
 
}
