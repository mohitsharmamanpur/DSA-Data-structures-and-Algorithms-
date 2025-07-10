// We have to use throw Keyword in place where exception is thrown. 

#include<iostream>
using namespace std;

class customer
{
    string name;
    int balance;
    int accountNumber;

    public:
           customer(string name,int balance,int accountNumber)
           {
            this->name = name;
            this->balance = balance;
            this->accountNumber = accountNumber;
           }
                //Deposit
           void deposit(int amount)
           {
            if(amount>0)
            {
                balance += amount;
                cout<< amount <<"rs is credited succesfullt"<<endl;
            }
            else
            {
                throw"Amount should be greater than 0";
            }
           }
               //Withdraw
             void withdraw(int amount)
             {
                if(amount>0 && amount<=balance)
                {
                    balance -= amount;
                    cout<<amount<<"rs is debited succesfully"<<endl;
                }
                else if(amount < 0)
                {
                   throw"Amount is less than 0";
                }
                else
                {
                    throw"Your balance is low";
                }
             }
};

int main()
{
   customer c1("Rohit",5000,10);
   c1.deposit(100);
   c1.withdraw(6000);
}


//So in this way we have handeled an Exception.