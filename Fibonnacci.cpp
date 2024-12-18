#include <iostream>

using namespace std;
int main() {

    //fib seq numbers
    int f1 = 0;
    int f2 = 1;

    //welcome
    cout << "Fibonnacci Numbers..." << endl;

    int number = 6;
    cout << ++number << endl;
    //sequence number entered by user
    int seqNum;
    //prompt user and get input for sequence number
    cout<<"Please enter in a sequence number...";
    cin>>seqNum;
    //validate input must be >=0
    while (seqNum<0)
    {
        //prompt user and get input for sequence number
        cout<<"Please enter in a sequence number (must be >= 0)...";
        cin>>seqNum;
    }

    //compute and display fib seq numbers
    if (seqNum==0) //only display fib seq 0
    {
        cout<<f1<<endl;
    }
    else if (seqNum==1) //only display fib seq 0 and 1
    {
        cout<<f1<<endl;
        cout<<f2<<endl;
    } else{
        cout<<f1<<endl; //fib seq 0
        cout<<f2<<endl;//fib seq 1
        for (int curSeq=2;curSeq<=seqNum;curSeq++)
        {
            int nextFibNum = f1+f2;
            cout<<nextFibNum<<endl;//fib seq nextFibNum
            f1 = f2; //move up for next seq num
            f2 =nextFibNum;
        }
    }
    return 0;
}