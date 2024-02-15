#include <iostream>
using namespace std;

int main() {
    
    char char1, char2, temp;

    cout << "Enter the first character: ";
    cin >> char1;
    cout << "Enter the second character: ";
    cin >> char2;

    if (char1 > 'M' || char2 > 'M')
    {
        cout << "Enter a character less than 'M' " << endl;
    } 
    else
    {
        temp = char1;
        char1 = char2;
        char2 = temp;

        cout << "First character: " << char1 << endl;
        cout << "Second character: " << char2 << endl;
    }

    return 0;
}