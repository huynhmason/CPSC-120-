// Lab 4h.cpp : Defines the entry point for the console application.
 
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <locale>
 
using namespace std;
 
int main()
{
    string equals,
        acct_number,
        full_name, f_name, m_name, l_name;
    double rate,
        acct_balance,
        e = 2.7182818,
        time,
        age;
    ifstream dataIn;
 
    dataIn.open("customer.dat");
 
    cout << "What is the expected annual rate f return (e.g., please enter percentage as a decimal): ";
    cin >> rate;
    cout << "\n\n";
 
    // nice formatting
    equals.assign(99, '=');
    cout << equals << endl << endl;
    cout << "Account Number" << setw(16) << "Name" << setw(71) << "What Your Current Balance Will be Worth at Retirement\n\n";
    cout << equals << endl << endl;
 
    dataIn >> acct_number >> f_name >> m_name >> l_name >> age >> acct_balance;
    full_name = f_name + " " + m_name + " " + l_name;
    time = 65 - age;
    std::cout.imbue(std::locale(""));
    std::cout << std::fixed << std::setprecision(2) << acct_number << setw(22) << full_name << setw(12) << '$' << acct_balance << " will be worth " << '$' << acct_balance * pow(e, rate * time) << " in " << time << " years. \n\n";
 
    dataIn >> acct_number >> f_name >> m_name >> l_name >> age >> acct_balance;
    full_name = f_name + " " + m_name + " " + l_name;
    time = 65 - age;
    std::cout.imbue(std::locale(""));
    std::cout << std::fixed << std::setprecision(2) << acct_number << setw(21) << full_name << setw(13) << '$' << acct_balance << " will be worth " << '$' << acct_balance * pow(e, rate * time) << " in " << time << " years. \n\n";
 
    dataIn >> acct_number >> f_name >> m_name >> l_name >> age >> acct_balance;
    full_name = f_name + " " + m_name + " " + l_name;
    time = 65 - age;
    std::cout.imbue(std::locale(""));
    std::cout << std::fixed << std::setprecision(2) << acct_number << setw(28) << full_name << setw(6) << '$' << acct_balance << " will be worth " << '$' << acct_balance * pow(e, rate * time) << " in " << time << " years. \n\n";
 
    dataIn >> acct_number >> f_name >> m_name >> l_name >> age >> acct_balance;
    full_name = f_name + " " + m_name + " " + l_name;
    time = 65 - age;
    std::cout.imbue(std::locale(""));
    std::cout << std::fixed << std::setprecision(2) << acct_number << setw(24) << full_name << setw(10) << '$' << acct_balance << " will be worth " << '$' << acct_balance * pow(e, rate * time) << " in " << time << " years. \n\n";
 
    dataIn >> acct_number >> f_name >> m_name >> l_name >> age >> acct_balance;
    full_name = f_name + " " + m_name + " " + l_name;
    time = 65 - age;
    std::cout.imbue(std::locale(""));
    std::cout << std::fixed << std::setprecision(2) << acct_number << setw(26) << full_name << setw(8) << '$' << acct_balance << " will be worth " << '$' << acct_balance * pow(e, rate * time) << " in " << time << " years. \n\n";
 
    dataIn.close();
 
 
    system("pause");
    return 0;
}
