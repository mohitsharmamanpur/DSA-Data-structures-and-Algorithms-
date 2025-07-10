#include<iostream>
using namespace std;

void findUnique(int arr[] , int n)
{
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        ans = ans^arr[i];
    }
    cout<<ans<<endl;
}

int main()
{
    int arr[7] = {1,3,4,1,3,4,5};

    findUnique(arr, 7);
}