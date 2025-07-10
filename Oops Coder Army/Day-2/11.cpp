//hume kaise pata--> konsa destructor pehle call hoga.

//Destructor.

#include<iostream>
using namespace std;

class customer
{
   string name;
   int *data;

   public:
        customer(string name)
        {
            this-> name = name;
            cout<<"Constructor is "<<name<<endl;
        }

        ~customer()
        {
            cout<<"Distructor is "<<name<<endl;
        }
        
};

int main()
{
   customer A1("1"),A2("2"),A3("3");
}


//One thig is destructor reverse order m call ho rahe h.
//So, Jo constructor hote h vo order wise h constructor ko call kerte h.
//Lakin jab destructor ki baat hoti h, vo reverse order me call hote h.

//--> Reason--??