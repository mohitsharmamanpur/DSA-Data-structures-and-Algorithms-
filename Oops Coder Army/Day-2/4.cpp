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
          customer(string a, int b, int c)
          {
            name = a;
            accountNumber = b;
            balance = c;
          }

          customer(string a, int b)
          {
            name = a;
            accountNumber = b;
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


//One thing that we have seen is that..
//we created three constructor.->All of them are taking different number of arguments.
//This is known as constructor Overloading.
//Function name is same, but they contain different arguments in them...is called constructor overloading.