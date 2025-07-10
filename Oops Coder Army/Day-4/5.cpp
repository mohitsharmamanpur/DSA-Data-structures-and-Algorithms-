#include<iostream>
using namespace std;

class human
{
    public:
    string name;
    int age, weight;

};

class student: protected human     //Child Class.
{
   int rollNumber, fees;
};

int main()
{
   student A;
   A.name= "Rohit";
} 

//Lakin ab m name, or baaki properties ko axcess kar sakta hu.
//kyuki public ko axcess kar sakte h.