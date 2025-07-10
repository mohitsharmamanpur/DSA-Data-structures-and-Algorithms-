// Direct axcess nahi dena, age ko private m likhenge.

#include<iostream>
using namespace std;

class customer
{
     
    string name;
    int accountNumber, balance, age;

   public:
        customer(string name, int accountNumber, int balance, int age)
        {
            this-> name = name;
            this-> accountNumber = accountNumber;
            this-> balance = balance;
            this-> age = age;
        }

        void deposit(int amount)
        {
            if(amount>0)
            {
                balance += amount;
            }
            else
            {
                cout<<"Invalid amount"<<endl;
            }
        }

        void updateAge(int age)
        {
            if(age>0 && age<100)
            {
                this-> age = age;
            }
            else
            {
                cout<<"Invalid age"<<endl;
            }
        }

        void withdraw(int amount)
        {
            if(amount <= balance && amount > 0)
            {
                balance -= amount;
            }
        }

        void display()
        {
            cout<<name<<" "<<accountNumber<<" "<<balance<<" "<<age<<endl;
        }
};


int main()
{
   customer A1("Rohit",1,1000,3);
   customer A2("Mohit",2,1800,5);
   customer A3("Mohan",3,2000,8);
   A1.updateAge(24);
   A1.deposit(-10);
   A1.display();
}
