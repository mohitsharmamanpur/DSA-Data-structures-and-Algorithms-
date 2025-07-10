#include<iostream>
using namespace std;

int findPivot(int arr[] , int size)
{
    int start = 0;
    int end = (size-1);
    int mid = start + (end-start)/2;

    while(start<end)
    {
        if(arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return end;
}

int main()
{
    int arr[8] = {6,7,8,9,2,3,4,5};          //We get the index of Pivot element.

    cout<<"Pivot is: "<<findPivot(arr , 8)<<endl;
}