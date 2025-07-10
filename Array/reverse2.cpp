#include<iostream>                  //swapping elements after index 4.
using namespace std;


void reverseArray(int arr[] ,int  n)
{
    int start = 4;
    int end = n-1;
    
    while(start <= end)
    {
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

}



void printArray(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< arr[i] <<endl;
    }
}
 

int main()
{
    int arr[6] = {1,2,3,4,5,6};

    reverseArray(arr , 6);
    printArray(arr , 6);

    return 0;
}