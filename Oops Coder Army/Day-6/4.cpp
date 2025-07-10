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
            cout<<real<<" +i "<<img<<endl;
        }

        complex operator+(complex &c)
        {
            complex ans;          //-->Check tha error. we have to create a default constructor for solving this error.
            ans.real = real+c.real;
            ans.img = img+c.img;
            return ans;
        }
          
};

int main()
{
   complex c1(3,4);
   complex c2(4,6);

  complex c3 = c1+c2;    //c1 ne call kiya h function ko, or c2 as a argument pass hua h.
  c3.display();  
}
