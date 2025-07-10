#include<iostream>
using namespace std;

class human
{
    private:
    string name;
    int age, weight;

};

class student: protected human     //Child Class.
{
    protected:
   int rollNumber, fees;

   public:
     void fun(string n , int a , int w)
      {
        name = n;
        age = a;
        weight = w;
      }

      void display()
      {
        cout<<name<<" "<<age<<" "<<weight<<" "<<endl;
      }
};

int main()
{
   student A;
   A.fun("Mohit",18,70);
   A.display();
} 


// Ab apan axcess nahi kar payenge, kyuki humne private kar diya h.