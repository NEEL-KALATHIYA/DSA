#include<iostream>
using namespace std;
int main()

{
    int a,b,c;
    cout << "Enter A Number : ";
    cin >> a;

    cout << "Enter B Number : ";
    cin >> b;

    cout << "Enter C Number : ";
    cin >> c;

    if(a!=b!=c)
    {
        if (a<b)
        {
             if (a<c)
            {
                cout << "The minimum value is: " << a << endl;
            }
             else
            {
                cout << "The minimum value is: " << c << endl;
            }      
       }
        else
        {
            if (b<c)
            {
                cout << "The minimum value is: " << b << endl;
            }
            else
            {
                cout << "The minimum value is: " << c << endl;
            }       
            
        }
        
    }
    else if (a==b && b==c)
    {
        cout << "All number are same...";
    }
    else if(a == b){
        if (a<c){
            cout << "\t" << "The minimum value is: " << a << endl;
        }
        else{
            cout << "\t" << "The minimum value is: " << c << endl;
        }
         
    }
    else if(a == c){
        if (a<b){
            cout << "\t" << "The minimum value is: " << a << endl;
        }
        else{
            cout << "\t" << "The minimum value is: " << b << endl;
        }
    }
    else if(b == c){
        if (b<a){
            cout << "\t" << "The minimum value is: " << b << endl;
        }
        else{
            cout << "\t" << "The minimum value is: " << a << endl;
        }
    }
    
    return 0;

}   