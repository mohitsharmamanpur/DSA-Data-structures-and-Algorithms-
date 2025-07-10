#include<iostream>
using namespace std;

void findDuplicate(int arr[] , int size)
{
    int ans = 0;
    for(int i=0;i<size;i++)
    {
        ans = ans^arr[i];
    }
    for(int i=0;i<size;i++)
    {
        ans = ans^i;
    }
    cout<<ans<<endl;
}

int main()
{
    int arr[5] = {1,2,3,4,3};

    findDuplicate(arr , 5);
}