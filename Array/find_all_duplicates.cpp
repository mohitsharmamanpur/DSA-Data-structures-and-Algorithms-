#include<iostream>
#include<vector>
using namespace std;

vector<int> findAllDuplicates(vector<int> nums , int n)
{
    vector<int> temp;
    vector<int> temp1(nums.size()+1,0);   //Ek naya temp1 banayenge,jiski size pichle wale se 1 jada 
                                          //hogi,or uske saare elements 0 hongi.
    for(int i=0;i<n;i++)
    {
        int index = nums[i];   //nums[i] ki value ko index m daala, phir temp1 ke index ko increment
        temp1[index]++;        //krenge jab tak vo 2 naa ho jai.
    }

    for(int i=0;i<temp1.size();i++)
    {
        if(temp1[i]==2)         //jaise hi two hua, retuen kr denge.
        {
            temp.push_back(i);
        }
    }
    return temp;
}

int main()
{
    int n;
    cout<<"enter the no of elements";
    cin>>n;
    
    vector<int> nums(n);

    cout<<"enter array elements";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    vector<int> k = findAllDuplicates(nums,n);

    for(int i=0;i<k.size();i++)
    {
        cout<<k[i]<<" ";
    }
}