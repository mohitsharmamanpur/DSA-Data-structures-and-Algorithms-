#include<iostream>
using namespace std;

class student 
{
    public:
    string name;
    int age, rollNumber;
    string grade;

    //function getter and setter.
    public:
           void setname(string s)
           {
            name = s;
           }
           void setage(int a)
           {
            age = a;
           }
           void setrollNumber(int r)
           {
            rollNumber = r;
           }
           void setgrade(string s)
           {
            grade = s;
           }

           void getname()
           {
            cout<< name <<endl;
           }
           
           void getage()
           {
            cout<<age<<endl;
           }

           int getrollNumber()
           {
            return rollNumber;
           }
};

int main()
{
    student s1;
    s1.setname("Mohit");
    s1.setage(10);
    s1.setrollNumber(21);
    s1.setgrade("A+");

    s1.getname();
    s1.getage();
    cout<<s1.getrollNumber();
}

//we can also use concept of array for doing all these things, then why we use 
//concept of classes and objects....
//because--> we can add special functionalities ....which is in our next slide.