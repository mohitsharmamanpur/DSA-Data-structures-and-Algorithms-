// Function overloading.

#include<iostream>
using namespace std;

class area 
{
    public:
        int calculateArea(int r) //circle
        {
            return 3.14*r*r;
        }
        int calculateArea(int l , int b)   //rectangle
        {
            return l*b;
        }
};

int main()
{
    area A1,A2;
    cout<< A1.calculateArea(4) <<endl;
    cout<< A2.calculateArea(2,3)<<endl;
}


//calculateArea naam ke 2 functions h, it has two forms means, ek hi functions se 
//2 kaam ho rahe h. Circle or rectangle dono ka area nikel raha h.

// It is called function overloading.  