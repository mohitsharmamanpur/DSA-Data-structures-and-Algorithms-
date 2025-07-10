//Similarly we can also use - operator.

#include<iostream>
using namespace std;

class complex
{
    int real,img;
    public: 
         complex()
         {

         }

        complex(int real , int img)
        {
           this-> real = real;
           this-> img = img; 
        }

        void display()
        {
            cout<<real<<" -i "<<img<<endl;
        }

        complex operator-(complex &c)
        {
            complex ans; 
            ans.real = real-c.real;
            ans.img = img-c.img;
            return ans;
        }
          
};

int main()
{
   complex c1(7,8);
   complex c2(4,6);

  complex c3 = c1-c2;    //c1 ne call kiya h function ko, or c2 as a argument pass hua h.
  c3.display();  
}


//We can also overload operators like << , >>.
//Wwe cant overload operators like__________?