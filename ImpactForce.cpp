#include <iostream>
#include <cmath>
#include <iomanip>
/* Name: Donald Kremer
Date: 9/8/22
Section: 0011
Assignment: Module 3
Due Date: 9/11/22
About this project: This program calculates impact force using the formula mv^2/2s
                    with m = mass v = velocity and s = speed (in m)
Assumptions: NA
was performed by Donald Kremer */

using namespace std;
int main() {

    // welcome the user
    cout << "Welcome, this program calculates the impact force by taking the mass, velocity, and speed." << endl;
    // assign mass of object
    long double mass;
    // assign velocity
    long double velocity;
    // assign speed
    long double speed;

    // get the user input
    cout << "Enter the mass of the object in kg:" << endl;
    cin >> mass;
    cout << "Enter the velocity in meters per second:" << endl;
    cin >> velocity;
    cout << "Enter the speed in meters:" << endl;
    cin >> speed;

    //use the input to calculate the force
    long double impact;
    impact = (mass * pow(velocity, 2))/(2 * speed);

    // output
    cout<<fixed<<setprecision(12);
    //display mass
    cout<<left<<setw(25)<<"Mass:"<<right<<setw(20)<<mass<<" kg"<<endl;
    // display velocity
    cout<<left<<setw(25)<<"Velocity:"<<right<<setw(20)<<velocity<<" m/s"<<endl;
    // display speed
    cout<<left<<setw(25)<<"Speed:"<<right<<setw(20)<<speed<<" m"<<endl;
    // display impact
    cout <<left<<setw(25)<< "Impact Force:" <<right<<setw(20)<<impact << " newtons" << endl;
    return 0;
}
