//hume kaise pata--> konsa constructor pehle call hoga.

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
            cout<<name<<endl;
        }
        
};

int main()
{
   customer A1("1"),A2("2"),A3("3");
}


//output is 1 2 3 --> to pehle A1 ka constructor call hua h, phir A2 ka , or phir A3 
//ka constructor call hua h.