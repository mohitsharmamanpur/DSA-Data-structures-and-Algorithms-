#include<iostream>
using namespace std;

void rotateArray(int arr[] , int size , int key)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        temp [(i+key)] % size = arr[i];
    }
    arr = temp;
}

void printArray(int arr[] , int size)
{
    for(int i=0;i<size;i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

int main()
{
    int key;
    cout<<"enter number to be shifted"<<endl;
    cin>>key;

    int array[5] = {1,2,3,4,5};
    
    rotateArray(arr , 5 , key);

    printArray(arr , 5);
}