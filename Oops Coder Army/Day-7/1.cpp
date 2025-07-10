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
           }
               //Withdraw
             void withdraw(int amount)
             {
                if(amount>0 && amount<=balance)
                {
                    balance -= amount;
                    cout<<amount<<"rs is debited succesfully"<<endl;
                }
             }
};

int main()
{
   customer c1("Rohit",5000,10);
   c1.deposit(100);
   c1.withdraw(6000);
}


// Jab hum run krenge,output m only deposit kaa msg aayega, withdraw wala nii aayega
//Because account m 5100 rs h, or hum total 6000 rs withdraw krna chahate h.
// So it is a Exception.