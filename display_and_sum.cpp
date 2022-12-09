// Program to display the numbers and print their sum

#include <iostream>
using namespace std;

//  function to display the numbers
int display(int num){
    return num;
}

//  function to add two numbers
int sum(int a, int b) {
    int sum = a + b;
    return sum;
}

//  main function
int main()
{
    int a = 10, b = 5;
    cout<<"Num 1 : "<< display(a)<<endl;
    cout<<"Num 2 : "<< display(b)<<endl;
    cout<<"Sum is "<<sum(a, b);
    return 0;
}
