#include<iostream>
using namespace std;

class student 
{
    string name;
    int age, rollNumber;
    string grade;
};

int main()
{
    student s1;
    s1.name = "Mohit";
    s1.age = 10;
    s1.rollNumber = 20;
    s1.grade = "A++";

}

//error will come, because we cannot excess the data because it is in the private section of class.
//we have to declare it as public.