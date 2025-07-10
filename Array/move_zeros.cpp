#include<iostream>
using namespace std;

void moveZeros(int arr[] , int n)
{
    int nonzero = 0;
    for(int j=0;j<n;j++)
    {
        if(arr[j] != 0)
        {
            swap(arr[j] , arr[nonzero]);
            nonzero++;
        }
    }
}

void printArray(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[7] = {1,0,0,5,3,0,9};

    moveZeros(arr , 7);
    printArray(arr , 7);

    return 0;
}