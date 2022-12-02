#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number=18, i;
    // cout<<"enter a number: ";
    // cin>>number;

    bool flag=0;

    for (i=2 ; i<=sqrt(number) ; i++)
    {
        if (number % i == 0)
        {
            cout<<number<<" is not a prime number."<<endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout<<number<<" is a prime number.";
    }
    return 0;
}