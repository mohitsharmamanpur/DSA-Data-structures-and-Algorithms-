#include<iostream>
using namespace std;

class animal
{
   public:
      virtual void speak()    //use virtual kerword
         {
            cout<<"HuHu"<<endl;
         }
          void roti()
      {
        cout<<"Hello"<<endl;
      }
};

class dog: public animal
{
    public:
        void speak()
        {
            cout<<"Bark"<<endl;
        }
       
};

int main()    //P dog waale address ko store kar raha h.
{
    animal *p;
    p = new dog();
    p->roti();
}

// Now we can print Hello.