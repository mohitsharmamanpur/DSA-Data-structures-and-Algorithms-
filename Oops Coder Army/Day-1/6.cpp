#include<iostream>
using namespace std;

class a
{
    int b;   // take 4 byte
    int c;   // take 4 byte
    int d;   // take 4 byte
};

int main()
{
   a obj;
   cout<<sizeof(obj)<<" ";
}