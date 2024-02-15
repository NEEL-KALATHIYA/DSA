#include<iostream>
using namespace std;

int main()
{
    int i,j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 50; j++)
        {
            if (((j==1 || j==5) && (i>=1 && i<=5)) ||
                (i==j) || ((i==1 || i==3 || i==5) && (j>=8 && j<=12)) || (j==8) ||
                ((i==1 || i==3 || i==5) && (j>=15 && j<=19)) || (j==15) ||
                ((i==5) && (j>=22 && j<=26)) || (j==22))

            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }   
        }
        cout << endl;
    }
    
}