/* Name: Donald Kremer
Date: 9-17-2022
Section: 3363-0011
Assignment: (Module #4 DO I Work or Go To Shcool)
Due Date: 9-18-2022
About this project: This program prompts the user with a series of questions in order to decide
 whether they should go to school or work
Assumptions: NA
 All work below was performed by Donald Kremer */
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Hello! This program will ask you a series of Yes/No or A/B questions to determine" << endl;
    cout << "whether or not you should go to school or work." << endl;

    // Initiate variables for the user input
    char userChoice1;

    // Begin to prompt the user if they woke up on time
    cout << "Did you wake up on time?" << endl;
    cin >> userChoice1;

    // if statement to decide
    if (userChoice1 == 'Y' || userChoice1 == 'y')
    {
        // Initiate the second variable for user input
        char userChoice2;
        // Promt the user about the shower pressure
        cout << "How's the shower's water Pressure" << endl;
        cout << "A) Fine" << endl;
        cout << "B) Meh" << endl;
        cin >> userChoice2;

        // nested if for shower
        if (userChoice2 == 'A' || userChoice2 == 'a')
        {
            // Initiate the third variable for user input
            char userChoice3;
            // Prompt the user about the weather
            cout << "Is it snowy or rainy outside?" << endl;
            cout << "A) Nah" << endl;
            cout << "B) Kinda" << endl;
            cin >> userChoice3;

            // nested if for shower
            if (userChoice3 == 'A' || userChoice3 == 'a')
            {
                // Initiate fourth variable for user input
                char userChoice4;
                // Ask the user if they actually feel like going
                cout << "Do you actually feel like going?" << endl;
                cout << "A) Sure" << endl;
                cout << "B) Nope" << endl;
                // assign a value to userChoice4
                cin >> userChoice4;
                // final nested if loop
                if (userChoice4 == 'a' || userChoice4 == 'A') {
                    cout << "Get a move on!" << endl;
                }
                // end of third nested if statement
                else if (userChoice4 == 'b' || userChoice4 == 'B')
                    cout << "Call in sick!" << endl;
                }
            // end of second nest if
            else if (userChoice3 == 'B' || userChoice3 == 'b')
                {
                cout << "Call in sick!" << endl;
                }
        }
        // End of first nested if
        else if (userChoice2 == 'B' || userChoice2 == 'b')
            cout << "Call in sick!" << endl;
    }
    // If the user answers no, tell them to call in sick
    else if (userChoice1 == 'N' || userChoice1 == 'n')
    {
        cout << "Call in Sick!" << endl;
    }
    // if the user does not enter valid input, ask them to run again
    else
    {


        cout << "You have not entered a valid choice please run the program again." << endl;
    }
    // terminate the program

    return 0;
}
