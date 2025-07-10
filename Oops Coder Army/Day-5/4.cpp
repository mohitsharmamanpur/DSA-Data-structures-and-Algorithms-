//agar parent class me,humne display function bana rakha h.

#include<iostream>
using namespace std;

class human
{
    protected:        //axcess kerwane ke liye protected hi rakna padega, private nahi kar sakte isko.
          string name;
          int age;

    public:

    human(string name , int age)
    {
        this->name = name;
        this->age = age; 
    }

      void display()
      {
        cout<<name<<" "<<age<<endl;
      }

       void work()
       {
        cout<<"I am working"<<endl;
       }
};

class student: public human
{
   int rollNumber, fees;

   public:
           student(string name , int age , int rollNumber , int fees): human(name , age)  //is tarike se hum name or age ko axcess ya inherit kar sakte h.
           {
             //Name or age parent class se inherit ho jaigi.
            this->rollNumber = rollNumber;
            this->fees = fees;
           }

           void display()
           {
            cout<<name<<" "<<age<<" "<<rollNumber<<" "<<fees<<endl;
           }
};

int main()
{
     student A1("Mohit" , 26,32,99);
     A1.work();   
     A1.display(); 
}


//ek display function h,to sirf ek hi ko call krega...TO vo 2nd wale ko call kar dega.
//kyuki jis class ka object h, vo uske ander hi jhankne ki koshish krega.

