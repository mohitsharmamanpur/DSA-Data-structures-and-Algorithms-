//Do object h, unme muge operator overloading kerna h--> How can we do that..

#include<iostream>
using namespace std;

class complex
{
    int real,img;
    public: 
        complex(int real , int img)
        {
           this-> real = real;
           this-> img = img; 
        }

        void display()
        {
            cout<<real<<"+i"<<img<<endl;
        }
          
};

int main()
{
    complex c1(3,2);
    complex c2(5,6);
    c1+c2;

}


//We cant add c1+c2 like this..we have to now use operator overloading.