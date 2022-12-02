// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, temp;

//     cout<<"Enter a number to find a reverse of : ";
//     cin>>num;

//     cout<<"Reverse of "<< num <<"is : ";

//     while (num>0)
//     {
//         temp = num % 10;
//         num = num / 10;
//         cout<<temp;
//     }
//     return 0;
// }


/* Another method to find a reverse of number*/
#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int reverse = 0;

    while (number>0){
        int lastDigit = number %10;
        reverse = reverse *10 + lastDigit;
        number /= 10;
    }
    cout<<"Reverse of a given number "<<number<<" is : "<<reverse;
    return 0;
}





