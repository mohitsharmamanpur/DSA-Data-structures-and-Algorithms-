//Question is, kiska constructor pehle call hotaq hoga. Let us make constructor
//of both class.

#include<iostream>
using namespace std;

class human
{
    protected:        //axcess kerwane ke liye protected hi rakna padega, private nahi kar sakte isko.
          string name;
          int age;

    public:
    //    void work()
    //    {
    //     cout<<"I am working"<<endl;
    //    }

    human()
    {
        cout<<"Hello human"<<endl;
    }

    ~human()
    {
        cout<<"Hii human"<<endl;
    }
};

class student: public human
{
   int rollNumber, fees;

   public:
        //    student(string name , int age , int rollNumber , int fees)
        //    {
        //     this->name = name;
        //     this->age = age;
        //     this->rollNumber = rollNumber;
        //     this->fees = fees;
        //    }

           student()
           {
            cout<<"Hello student"<<endl;
           }

           ~student()
           {
            cout<<"Hii student"<<endl;
           }
};

int main()
{
     student A1;
                  
}


//So sabse pehle apne parent class ka constructor call hoga.
// and reverse in case of destructor.

