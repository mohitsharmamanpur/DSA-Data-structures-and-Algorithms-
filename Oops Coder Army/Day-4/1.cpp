#include<iostream>
using namespace std;

class human
{
    private: 
            int a;
    protected: 
            int b;
    public:
            int c;           
};

int main()
{
   human rohit;
   rohit.a = 10;  //-->isko axcess nahi kar sakte , kyuki ye private part m h.
   rohit.b = 20;  //-->isko axcess nahi kar sakte, kyuki ye protected part m h.
   rohit.c = 30;  //-->isko axcess kar sakte h, kyuki ye public part m h.
}