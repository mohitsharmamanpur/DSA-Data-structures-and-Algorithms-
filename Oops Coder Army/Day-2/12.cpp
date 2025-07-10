//If a want to create my objects dynamically.
#include<iostream>
using namespace std;

class customer
{
   string name;
   int *data;

   public:
        customer()   //Default constructor.
        {
            name = "4";
            cout<<"Constructor is called"<<name<<endl;
        }      

        customer(string name)
        {
            this-> name = name;
            cout<<"Constructor is "<<name<<endl;
        }

        ~customer()
        {
            cout<<"Dustructor is "<<name<<endl;
        }
        
};

int main()
{
   customer A1("1"),A2("2"),A3("3");
   customer *A4 = new customer;      //-->creating object dynamically.
   delete A4;        //-->isse apni A4 waali memory by destroy ho jaige.
}
