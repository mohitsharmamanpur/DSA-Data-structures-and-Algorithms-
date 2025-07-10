#include<iostream>
using namespace std;

class human
{
    protected:
    string name;
    int age, weight;

};

class student: protected human        //Child Class.
{
    private:
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


//Run krega.