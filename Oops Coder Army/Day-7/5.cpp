//Jab bhi m deposit or withdraw wale function perform kar raha hu, unme 
//exception aa sakta h.
//Jo bhi inme exception aayega, hume unko handle kerna h.
// To handle this we will use the try keyword.

//try se usne msg ko throw kera h, to m us msg ko catch kar lunga
//so we use catch keyword.

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
   try
   {                               
   c1.deposit(100);
   c1.withdraw(6000);
   c1.deposit(100);
   }
   catch(const char *e)   //kyuki jo msg aa raha h, vo koi character type ki string h. usne msg ko point kiya h pointer ki wajah se. e ek pointer h jo ki catch har raha h msg ko.
   {
      cout<<"Exception occured: "<<e;
   }
}


