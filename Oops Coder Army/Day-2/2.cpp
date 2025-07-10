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
              cout<<"Hello constructor"<<endl;
          } 
};

int main()
{
    customer A1;
}

//When we will run the code, "Hello customer" will be called.
//This shows that our default constructor is working properly.