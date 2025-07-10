//Inline Constructor.
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
        //   customer(string name, int accountNUmber, int balance)
        //   {
        //    this-> name = name;
        //    this-> accountNumber = accountNumber;
        //    this-> balance = balance;
        //   }

  // ye ni likna h , kyui ye bhi 3 arguments le raha h, to compiler confuse
  //ho jaige ki inline constructor ke pass jana h ya paramatrized ke pass.

          customer(string a, int b)
          {
            name = a;
            accountNumber = b;
            balance = 50;
          }
                //Inline constructor.
          inline customer(string a, int b, int c): name(a),accountNumber(b),balance(c)
          {

          }

          void display()
          {
            cout<<name<<" "<<accountNumber<<" "<<balance;
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
