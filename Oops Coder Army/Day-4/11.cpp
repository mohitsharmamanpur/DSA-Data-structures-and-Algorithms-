#include<iostream>
using namespace std;

class human
{
    private:
    string relegion, color;
    protected:             //Yaha pe maine protected likha h,agar m human class ka object banata hu tab bhi ye direct axcess nahi ho payenge. 
    string name;           //bilkul->Encapsulation ki property ko hold kar raha h.Protected ek cheej m orr help kar raha h, agar hume ise inherit kerena h, to ye wala part hamara inherit jo sakta h.
    int age, weight;       //isliye hume protected ki jarurat padi h, protected hamare encapsulation ko bhi save kerke rakhta h or derived class ki help bhi kar deta h.

};

class student: private human     //Child Class.
{
    private:
   int rollNumber, fees;

   public:
                 //constructor.
     student(string name , int age , int weight , int rollNumber , int fees)
     {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->rollNumber = rollNumber;
        this->fees = fees;
     }

     void display()
     {
        cout<<"Name is: "<<name<<"Age is: "<<" "<<age<<" "<<"Weight is: "<<weight<<"Roll umber is "<<rollNumber<<"fees is: "<<fees<<endl;
     }
};


int main()
{
   student A("Rohit",12,400,23,50000);
   A.display();
  
} 
