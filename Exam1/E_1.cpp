#include<iostream>
using namespace std;
int main()

{
    int n;
    cout << "Enter Any Number : ";
    cin >> n;
    (n>0)
    
        ? (n%2 == 0)
            ? cout << "This Number is Even " 
            : cout <<" This Number is odd " 
        :cout << "Please Enter 0 or greater number";
    
} 
