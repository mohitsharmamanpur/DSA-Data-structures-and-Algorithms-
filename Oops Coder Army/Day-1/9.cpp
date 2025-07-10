#include<iostream>
using namespace std;

class a     
{
   int b;
   char d;
   char c;    //It will take 8 byte in memory, why? 
};            //(4+1) = 5, then why it take 8 byte..
             //There is a concept of Padding.
int main()
{
   a obj;
   cout<<sizeof(obj)<<" ";
}


// takes 8 bytes in memory.