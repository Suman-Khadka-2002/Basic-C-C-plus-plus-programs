// checks whether the given number is palindrome or not.
// palindrome : number same seeing from backward as well

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a positive number: ";
    cin>>num;

    int n = num;
    int rev = 0;

    do{
        int digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }while(num != 0);

    cout<<"\nThe reverse of the number is : "<<rev<<endl;

    if(n == rev)
        cout<<"\n\nThe number is palindrome";
    else
        cout<<"\n\nThe number is not palindrome";
}