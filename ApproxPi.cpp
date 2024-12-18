/* Name: Donald Kremer
Date: 9-28-2022
Section: 3363-0011
Assignment: Module 5 ApproxPI
Due Date: 10-2-2022
About this project: This project takes the users input (integer 1 < x < 30) and approximates pi
Assumptions: NA
All work below was performed by Donald Kremer */


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {

    // welcome the user to the program
    cout << "Welcome to the pie approximation program.!" << endl;
    // Initialize user input
    int k;
    cout << "Enther an integer k (between 1 and 30) to be approximated to PI." << endl;
    cin >> k;
    // validate user input (greater than or equal to 1 and less than or equal to 30)
    while (k < 1 || k > 30)
    {
        cout << "Invalid number, enter a number between 1 and 30:" << endl;
        cin >> k;
    }
    // initialize the variables to accumulate
    long double i = 0.0;
    long double y = 0.0;
    // take user input and put 2 to the kth power
    i = pow(2, k);
    // initialize the counter for the while loop
    int counter = 0;
    // initialize variable for the counter (k - 1)
    int j;
    j = k - 1;

    // maybe make this into a variable to times i by?
    // including the sqrt - sqrt +
    while (counter < j)
    {
        y = sqrt(2 + y);
        counter++;
    }
    // initialize final variable to represent y
    double pi = 0.0;
    pi = i * sqrt(2 - y);
    cout << pi;

    return 0;
}



