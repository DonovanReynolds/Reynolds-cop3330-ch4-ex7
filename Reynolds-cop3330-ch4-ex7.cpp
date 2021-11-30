/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Donovan Reynolds
 */

#include "std_lib_facilities.h"

double decodeDigits(vector<string> names,vector<string>nums, string number);

int main()
{
    vector<string> numberNames = 
    {"zero" , "one","two","three","four","five","six","seven","eight","nine","ten"};
        vector<string> numberNamesNumberForm = 
    {"0" , "1","2","3","4","5","6","7","8","9","10"};

    double first, second, finalVal;
    string operation;
    string number1;
    string number2;

    cin >> number1 >> number2 >> operation;
    first = decodeDigits(numberNames,numberNamesNumberForm,number1);
    second = decodeDigits(numberNames,numberNamesNumberForm,number2);

    if (operation == "+")
    {
        finalVal = first + second;
        cout << "The Sum of " << first << " and " << second << " is " << finalVal;
    }

    else if (operation == "-")
        {
            finalVal = first - second;
            cout << "The Difference of " << first << " and " << second << " is " << finalVal;
        }
    else if (operation == "*")
        {
            finalVal = first * second;
            cout << "The Product of " << first << " and " << second << " is " << finalVal;
        }
    else if (operation == "/")
        {
            finalVal = first / second;
            cout << "The Quotient of " << first << " and " << second << " is " << finalVal;
        }
    
    

}

double decodeDigits(vector<string> names,vector<string>nums, string number)
{
    int num = 0;
    for (string s: names)
    {
        if (s == number)
        {
            return num;
        }
        num++;
    }
    num = 0;
    for (string i: nums)
    {
        if (i == number)
        {
            return num;
        }
        num++;
    }
    return -1;
}
