#include<iostream>
using namespace std;

class human
{
    protected:
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

//same case protected ke sath h.