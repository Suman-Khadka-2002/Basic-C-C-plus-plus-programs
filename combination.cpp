// cpp program to calculate the combination

#include<iostream>
using namespace std;

int fact(int n);
// combination calculation
int combination(int n, int r){
    return fact(n)/(fact(n-r)*fact(r));
}
// factorial calculation function
int fact(int n)
{
    if (n==0)   //if n ==0, then the factorial is 1
        return 1;

    int fact = 1;
    for (int i=1; i<=n; i++){
        fact *=i;
    }
    return fact; //returns the value to main function
}

//main function
int main()
{
    int num, r;
    cout<<"Enter a number: "; //N value initialization for NCr
    cin>>num;
    cout<<"Enter r: "; // r value initialization for NCr
    cin>>r;
    cout<<"\n\nThe combination value is: "<<combination(num, r); //prints the result
    return 0;
}