#include<iostream>
using namespace std;

class animal
{
   public:
         void speak()
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
};

int main()
{
    animal *p;
    p = new dog();
    p->speak();
}


//If we run the code, HuHu get printed. But why??
//-->Kuki ye complile time m decide kar raha h ki use konse speak ko call kerna h.
// We have to use virtual keyword.