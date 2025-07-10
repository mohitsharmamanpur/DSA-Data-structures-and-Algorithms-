// Multilevel Inheritance.

#include<iostream>
using namespace std;

class person
{
    protected:
             string name;
    public:
         void introduce()
         {
            cout<<"My name is: "<<name<<endl;
         }

};

class employee: public person
{
    protected:
          int salary;

     public:
         void monthlySalary()
         {
            cout<<"My monthly salary is: "<<salary<<endl;
         }     
};

class manager: public employee
{
    public:
       string department;

   manager(string name,int salary,string department)
   {
     this->name = name;
     this->salary = salary;
     this->department = department;
   };

   void work()
   {
    cout<<"I am leading the department"<<department<<endl;
   }

};

int main()
{
   manager A1("Rohit", 200, "Finance");
   A1.monthlySalary();
   A1.introduce(); 
}