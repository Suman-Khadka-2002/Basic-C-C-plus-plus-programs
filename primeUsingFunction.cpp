// Program to check the prime number using function

#include<iostream>
using namespace std;

int checkPrime(int num){
    bool isPrime = true;
    //0 and 1 are not prime numbers
    if (num==0 || num==1)
        isPrime = false;

    for (int i=2; i<=num; i++)
    {
        if (num%2==0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main()
{
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;

//  fuction call
    if (checkPrime(n))
        cout<<n<<" is a prime number";
    else
        cout<<n<<" is not a prime number";
    return 0;
}