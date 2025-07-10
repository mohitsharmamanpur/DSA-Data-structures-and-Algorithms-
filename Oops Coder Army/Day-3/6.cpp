#include<iostream>
using namespace std;

class customer
{
     public:
    string name;
    int accountNumber, balance; 

   
        customer(string name, int accountNumber, int balance)
        {
            this-> name = name;
            this-> accountNumber = accountNumber;
            this-> balance = balance;
        }

        void deposit(int amount)
        {
            if(amount>0)
            {
                balance += amount;
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
   customer A1("Rohit",1,1000);
   customer A2("Mohit",2,1800);
   customer A3("Mohan",3,2000);
   A1.balance += -10;
   A1.display();
}




//hamara balance 990 aa gaya, it does not make any sence 
//Humko valid balance daalne padega.