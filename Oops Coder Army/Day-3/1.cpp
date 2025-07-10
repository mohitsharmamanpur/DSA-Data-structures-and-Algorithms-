#include<iostream>
using namespace std;

class customer
{
    string name;
    int accountNumber, balance; 
    static int total_customer;

    public:
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
};

int customer :: total_customer = 0;

int main()
{
   customer A1("Rohit",1,1000);
   customer A2("Mohit",2,1800);
   A1.display();
   A2.display();
   customer A3("Mohan",3,2000);
   A3.display();
}