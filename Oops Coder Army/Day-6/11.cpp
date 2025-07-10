//Why we have made this code so much complicated....?

#include<iostream>
using namespace std;

class animal
{
   public:
      virtual void speak()    
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
    // animal *p;
    // p = new dog();
    // p->speak();

    dog d1;
    d1.speak();
}

// M esa bhi to kar sakta tha ,fir mane itna bada procedure follow kyu kiya.
//Kyu m parent class ka object bana raha hu, or store kerwa raha hu child class ke object ko.