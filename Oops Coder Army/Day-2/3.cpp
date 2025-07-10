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

          void display()
          {
            cout<<name<<" "<<accountNumber<<" "<<balance<<endl;
          }
};

int main()
{
    customer A1,A2,A3;
    A1.display();
    A2.display();
    A3.display();
}

//Teeno values same aayegi...--> Pehle A1 gaya, usne apne customer ko call kiya-A1 ne apne name, accountNumber
//or balance ki gajah values daal di.
//Same A2 call hua............
//Same A3 call hua..............



//Agar muge inke ander inki individual values store karni h.