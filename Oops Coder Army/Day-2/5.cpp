//If we change the argument....
// Than we will have to use this pointer...


#include<iostream>
using namespace std;

class customer
{
    string name;
    int accountNumber;
    int balance;

   public:
          customer()    //Default constructor.
          {
             name = "Mohit";
             accountNumber = 5;
             balance = 100;
          } 
                     //Paramatrized constructor.
          customer(string name, int accountNUmber, int balance)
          {
           this-> name = name;
           this-> accountNumber = accountNumber;
           this-> balance = balance;
          }

          customer(string a, int b)
          {
            name = a;
            accountNumber = b;
            balance = 50;
          }

          void display()
          {
            cout<<name<<" "<<accountNumber<<" "<<balance<<endl;
          }
};

int main()
{
    customer A1;
    customer A2("Rohit",120,2000);
    customer A3("Mohit",205);
    A1.display();
    A2.display();
    A3.display();
}

