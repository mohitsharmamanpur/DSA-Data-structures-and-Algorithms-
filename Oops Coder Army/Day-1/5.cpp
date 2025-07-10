#include<iostream>
using namespace std;

class student 
{
    public:
    string name;
    int age, rollNumber;      
    string grade;

    //function getter and setter.
    public:
           void setname(string s)
           {
            name = s;
            {
                if(s.size() == 0)
                {
                    cout<<"Invalid name: "<<endl;
                    return;
                }
            }
           }
           void setage(int a)
           {
             age = a;
            if(age<0 || age>100)
            {
                cout<<"Invalid age: "<<endl;
                return;
            }
           }
           void setrollNumber(int r)
           {
            rollNumber = r;
           }
           void setgrade(string s)
           {
            grade = s;
           }

           void getname()
           {
            cout<< name <<endl;
           }
           
           void getage()
           {
            cout<<age<<endl;
           }

           int getrollNumber()
           {
            return rollNumber;
           }

           string getgrade(int pin)
           {
             if(pin == 123)        //ab wo grade tab hi batayega, jab hum pin sahi daalenge.
             return grade;

             return " ";
           }
};

int main()
{
    student s1;
    s1.setname("Mohit");
    s1.setage(60);
    s1.setrollNumber(21);
    s1.setgrade("A+");

    s1.getname();
    s1.getage();
    cout<<s1.getrollNumber() <<endl;
    cout<<s1.getgrade(123) <<endl;
}
