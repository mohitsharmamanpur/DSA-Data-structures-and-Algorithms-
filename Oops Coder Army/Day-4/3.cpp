#include<iostream>
using namespace std;

class human
{
    private:
    string name;
    int age, weight;

};

class student: public human     //Child Class.
{
   int rollNumber, fees;
};

int main()
{
   student A;
   A.name= "Rohit";
} 

//Code run nahi krega, kyuki humne data private m daala h, to human class ki properties 
//child class m inherited nahi hogi.
//main usko axcess nahi kar payega.