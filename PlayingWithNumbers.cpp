/* Name: Donald Kremer
Date: 10-10-2022
Section: COP 3363-0011
Assignment: Module 6 PlayingWithNumbers
Due Date: 10-9-2022
About this project: This program receives two integers from the user and calculates the combinations and permutations
 then displays them to the user
Assumptions: N/A
All work below was performed by (Donald Kremer) */
#include <iostream>
#include <iomanip>
#include <cmath>

// Prototype for user input validation
void GetValidUserInputPosNumGT0(long int &);
// prototype for factorial
long double factorial(long int);
// prototype for the combination function
long double ComputeCombination(long int, long int);
// Permutation function prototype
long double ComputePermutation(long int, long int);

using namespace std;

int main() {

    // menu choice
    int m = 0;
    // Welcome the user
    cout << "Welcome to the Playing with Numbers" << endl;
    // while loop for the menu
    while (m != 3) {
        cout << "Select an option..." << endl;
        cout << "1) Computing Combinations" << endl;
        cout << "2) Computing Permutations" << endl;
        cout << "3) Quit" << endl;
        cout << "Select 1, 2, or 3..." << endl;
        cin >> m;

        while (m < 1 || m > 3) {
            cout << "Select 1, 2, or 3..." << endl;
            cin >> m;
        }

        // first option (combination)
        if (m == 1) {
            long int k;
            long int n;
            long int y;
            // Get the user input and validate
            cout << "Enter an integer: " << endl;
            cin >> n;
            GetValidUserInputPosNumGT0(n);
            cout << "Enter in a value for k" << endl;
            cin >> k;
            GetValidUserInputPosNumGT0(k);
            // show the combination
            cout << ComputeCombination(n, k) << endl;


        }
            // second option (permutation)
        else if (m == 2) {
            long int n;
            long int k;

            cout << "Enter an integer: " << endl;
            cin >> n;
            GetValidUserInputPosNumGT0(n);
            cout << "Enter in a value for k" << endl;
            cin >> k;
            GetValidUserInputPosNumGT0(k);
            // show the user the permutation
            cout << ComputePermutation(n, k) << endl;

        }
    }

    return 0;
}

// validation function
void GetValidUserInputPosNumGT0(long int &n) {
    while (n <= 0) {
        cout << "Enter a positive integer" << endl;
        cin >> n;
    }

}

// factorial function
long double factorial(long int n) {
    long double val =1;
    for (int i=1; i <= n; i++)
        val *= i;
    return val;
}

// combination loop using n and k as parameters
long double ComputeCombination(long int n, long int k) {

    return (factorial(n)) / (factorial(k) * factorial(n - k));
}

// permutation loop using n and k
long double ComputePermutation(long int n, long int k) {

    return (factorial(n)) / (factorial(n - k));

}








