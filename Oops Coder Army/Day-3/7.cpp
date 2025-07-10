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
        void withdraw(int amount)
        {
            if(amount <= balance && amount > 0)
            {
                balance -= amount;
            }
        }

        void display()
        {
            cout<<name<<" "<<accountNumber<<" "<<balance<<endl;
        }
};


int main()
{
   customer A1("Rohit",1,1000,3);
   customer A2("Mohit",2,1800,5);
   customer A3("Mohan",3,2000,8);
   A1.deposit(-10);
   A1.display();
}



// M data ko hide kerta hu, direct axcess nahi kerta
// Encapsulation keheta h, ki jitne bhi hamare variable h
//or jitne bhi hamare function h, un sabko class ke ander likh do...
// Or jitne bhi variable or data member present h, unko
//private m daalo..unko direct axcess mat do.
// Function ki help se unko axcess do.