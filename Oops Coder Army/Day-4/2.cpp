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

        void function()  //Arram se run krega teeno private,public and protected ka data, kyuki humne class m hi function
        {                //bana rakha h.
            a = 10;      //void function ko hum, private ,protected yaa public kahin par bhi use kar sakte h.
            b = 20;
            c = 30;
        }             
};

int main()
{
   human rohit;  
   rohit.c = 30;  
   rohit.function();
}