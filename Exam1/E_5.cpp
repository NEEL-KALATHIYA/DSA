#include <iostream>
using namespace std;

int main()
{
    double num1, num2, Result;

    int choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Press 1 for +" << endl;
    cout << "Press 2 for -" << endl;
    cout << "Press 3 for *" << endl;
    cout << "Press 4 for /" << endl;
    cout << "Press 5 for %" << endl;
    cout << "Enter your choice: ";

    cin >> choice;

    switch (choice)
    {
    case 1:
        Result = num1 + num2;
        cout << "Addition is " << Result << endl;
        break;

    case 2:
        Result = num1 - num2;
        cout << "Subtraction is " << Result << endl;
        break;

    case 3:
        Result = num1 * num2;
        cout << "Multiplication is " << Result << endl;
        break;

    case 4:
        if (num2 != 0)
        {
            Result = num1 / num2;
            cout << "Division is " << Result << endl;
        }
        else
        {
            cout << "Error! Cannot divide by zero." << endl;
        }
        break;

    case 5:
        if (num2 != 0)
        {
            Result = static_cast<int>(num1) % static_cast<int>(num2);
            cout << "Modulus is " << Result << endl;
        }
        else
        {
            cout << "Error! Cannot perform modulus with zero." << endl;
        }
        break;
    }
    return 0;
}