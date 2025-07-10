//Multiple inheritance.

#include<iostream>
using namespace std;

class engineer
{
    void money()
    {
        cout<<"Hello money"<<endl;
    } 
    public:
        string specilization;

        void work()
        {
            cout<<"I have specilization in: "<<specilization<<endl;
        }
};

class youtuber
{
    public:
        int subscribers;

        void contentcreater()
        {
            cout<<"I have suscriber base of: "<<subscribers<<endl;
        }
};

class codeteacher: public engineer, public youtuber
{
   public:
       string name;

       codeteacher(string name, string specilization, int subscriber)
       {
        this->name = name;
        this->specilization = specilization;
        this->subscribers = subscribers;
       }
    
    void showcase()
    {
        cout<<"My name is: "<<name<<endl;
        work();
        contentcreater();
    }

};

int main()
{
    codeteacher A1("Mohit","CSE",49000);
    A1.showcase();
}