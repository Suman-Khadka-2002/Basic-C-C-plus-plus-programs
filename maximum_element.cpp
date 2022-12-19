// to find the maximum element of an array

#include<iostream>
using namespace std;

int findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i=0 ; i<n ; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int a[50], n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }

    cout<<"\n\nThe maximum element in the array is " <<findMax(a, n);

}