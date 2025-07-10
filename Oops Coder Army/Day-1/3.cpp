#include<iostream>
using namespace std;

class student 
{
    public:
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

    cout<<s1.age<<" "<<endl;;

    student s2;
    s2.name = "Rohit";
    s2.age = 100;
    s2.rollNumber = 200;
    s2.grade = "B++";

    cout<<s2.name<<" ";
}


//all these can be excessed only when all are declared in the public section of the class.
// the use of private is that--> I do not want that anyone can modify or change my private data.
//because we will talk about data security.

// we will use functions to excess private part of the data.