#include<iostream>
using namespace std;

int lastOcc(int arr[] , int n , int key)
{
    int s = 0 , e = n-1;
    int mid = s + (e-s)/2;
     int ans = -1;

    while(e<=s)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid])
        {
            s = mid + 1;
        }
        else if(key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}




int main()
{
    int even[5] = {1,2,3,3,5};

    cout<< "last occurance of 3 is"<<lastOcc(even , 5 , 3) <<endl;
    return 0;

}