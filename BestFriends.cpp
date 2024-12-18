/* Name: Donald Kremer
Date: 9-18-2022
Section: 3363-0011
Assignment: Module #4 Ordered Best Friends
Due Date: 9-18-2022
About this project: This program prompts the user for three of their best friends,
 then lists them back in alphabetic order
Assumptions: NA
All work below was performed by Donald Kremer */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // initiate string variables
    string name1;
    string name2;
    string name3;
    // Welcome the user
    cout << "Hello and welcome to the ordered best friend names program" << endl;
    // ask the user for the first name
    cout << "Please enter the first name of a best friend." << endl;
    cin >> name1; // user input for first name
    // ask the user for a second name
    cout << "Please enter the first name of a second best friend." << endl;
    cin >> name2; // second name
    // ask the user for a third name
    cout << "Please enter the first name of a third best friend." << endl;
    cin >> name3; // third name

    // compare the strings
    // starting with name1
    if (name1 < name2 && name1 < name3)
    {
        cout << name1 << endl;
        // test the folowing strings to decide remaining order
        if (name2 < name3)
        {
            cout << name2 << endl;
            cout << name3 << endl;
        }
        else if (name3 < name2)
        {
            cout << name3 << endl;
            cout << name2 << endl;
        }
    }
    // test if name2 is first
    if (name2 < name1 && name2 < name3)
    {
        cout << name2 << endl;
        // display remaining names in order
        if (name1 < name3)
        {
            cout << name1 << endl;
            cout << name3 << endl;
        }
        else if (name3 < name2)
        {
            cout << name3 << endl;
            cout << name1 << endl;
        }
    }
    // test and show if name3 is first
    if (name3 < name2 && name3 < name1)
    {
        // display name 3
        cout << name3 << endl;
        // test for which name follows name3
        if (name2 < name1)
        {
            cout << name2 << endl;
            cout << name1 << endl;
        }
        else if (name1 < name2)
        {
            cout << name1 << endl;
            cout << name2 << endl;
        }
    }
    // Validate and show if they are equal
    else if (name1 == name2 && name2 == name3)
    {
        cout << "All the names are equal." << endl;
    }
    else
        cout << "That is not a valid name" << endl;
    //cout << name1 << name2 << name3 << endl;

    return 0;
}
