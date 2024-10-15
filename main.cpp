/*****
 * Problem Statement: Number Counter
 Write a C++ program that:

 Takes an integer input n from the user.
  Displays a count from 1 to n using the increment operator (++).
 Then, displays a countdown from n to 1 using the decrement operator (--).
    Example:
 If the user enters 5, the program should output:

 Counting up:1 2 3 4 5
 Counting down: 5 4 3 2 1
********/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value for n"<<endl;
    cin>>n;
    cout<<"counting up:"<<endl;
    for(int i=1;i<=n; i++)
    {
        cout<<""<<i<<endl;
    }
    cout<<"counting down:"<<endl;
    for(int i=n;i>=1; i--)
    {
        cout<<""<<i<<endl;
    }
    return 0;
}
