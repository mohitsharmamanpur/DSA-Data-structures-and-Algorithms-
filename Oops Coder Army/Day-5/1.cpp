// Single Inheritance.

#include<iostream>
using namespace std;

class human
{
    protected:        //axcess kerwane ke liye protected hi rakna padega, private nahi kar sakte isko.
          string name;
          int age;

    public:
       void work()
       {
        cout<<"I am working"<<endl;
       }
};

class student: public human
{
      private:
   int rollNumber, fees;

   public:
           student(string name , int age , int rollNumber , int fees)
           {
            this->name = name;
            this->age = age;
            this->rollNumber = rollNumber;
            this->fees = fees;
           }
};

int main()
{
     student A1("Mohit" , 26,32,99);
     A1.work();     //A1, 2nd class ka object h, lakin hum 1st class ke work function ko axcess kar paa rahe h. because of inheritance..
}