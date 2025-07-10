//Static member functions.

//We do more changes.

#include<iostream>
using namespace std;

class customer
{
    string name;
    int accountNumber, balance; 
    static int total_customer;

    static int total_balance;         

    public:
        customer(string name, int accountNumber, int balance)
        {
            this-> name = name;
            this-> accountNumber = accountNumber;
            this-> balance = balance;
            total_customer++;
             
            total_balance = total_balance + balance;
        }

        static void accessStatic()
        {
            cout<<"Total number of customer: "<<total_customer<<endl;
            cout<<"Total balance: "<<total_balance<<endl;
        }

        void display()
        {
            cout<<name<<" "<<accountNumber<<" "<<balance<<" "<<total_customer<<endl;
        }

        void display_total()
        {
            cout<<total_customer<<endl;
            cout<<total_balance<<endl;
        }

        void deposit(int amount)
        {
            if(amount>0)
            {
                balance += amount;
                total_balance += amount;
            }
        }
        void withdraw(int amount)
        {
            if(amount <= balance && amount > 0)
            {
                balance -= amount;
                total_balance -= amount;
            }
        }
};

int customer :: total_customer = 0;
int customer :: total_balance = 0;

int main()
{
   customer A1("Rohit",1,1000);
   customer A2("Mohit",2,1800);
   customer A3("Mohan",3,2000);
   A1.deposit(800);
   A2.withdraw(500);        
   customer::accessStatic();
 
}





// Const keyword --> ??  Homeword.