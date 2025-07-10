#include<iostream>
using namespace std;

class customer
{
    string name;
    int accountNumber, balance; 
    

    public:
           static int total_customer;

        customer(string name, int accountNumber, int balance)
        {
            this-> name = name;
            this-> accountNumber = accountNumber;
            this-> balance = balance;
            total_customer++;
        }

        void display()
        {
            cout<<name<<" "<<accountNumber<<" "<<balance<<" "<<total_customer<<endl;
        }

        void display_total()
        {
            cout<<total_customer<<endl;
        }
};

int customer :: total_customer = 0;

int main()
{
   customer A1("Rohit",1,1000);
   customer A2("Mohit",2,1800);
   customer A3("Mohan",3,2000);
   customer::total_customer = 5;
   A1.display_total();  
}