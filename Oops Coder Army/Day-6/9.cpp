#include<iostream>
using namespace std;

class animal
{
   public:
      virtual void speak()    //use virtual kerword
         {
            cout<<"HuHu"<<endl;
         }
};

class dog: public animal
{
    public:
        void speak()
        {
            cout<<"Bark"<<endl;
        }
      void roti()
      {
        cout<<"Hello"<<endl;
      }
       
};

int main()    //P dog waale address ko store kar raha h.
{
    animal *p;
    p = new dog();
    p->roti();
}

//Ab print nahi hoga??
//P ek pointer h jo animal class ko point kar raha h.
//roti wala function jo h, vo anomal class m nahi h, to vo roti ko access nah kar sakta.