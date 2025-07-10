#include<iostream>
using namespace std;

class area
{
    public: 
        int computeArea(int r)
        {
            return 3.14*r*r;
        }
        int computeArea(int l , int b)
        {
            return l*b;
        }
};

int main()
{
   area a1,a2;
   cout<< a1.computeArea(2) <<endl;
   cout<< a2.computeArea(4,5) <<endl;
}


//It is complile time.