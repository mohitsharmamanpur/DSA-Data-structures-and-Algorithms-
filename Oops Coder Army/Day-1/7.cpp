#include<iostream>
using namespace std;

class a     //it is an empty class, but it takes 1 byte of memory.
{
     
};

int main()
{
   a obj;
   cout<<sizeof(obj)<<" ";
}