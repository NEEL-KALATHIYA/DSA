#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;

    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i + 1] - a[i];
    }

    int max = 0, num = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            max = a[i];
            num = i;
        }
    }

    int max1 = a[num];

    cout << max1 << " val " << max << " dist." << endl;
}