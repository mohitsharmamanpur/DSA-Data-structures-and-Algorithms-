#include<iostream>
using namespace std;

class area
{
    public: 
        int computeArea(int r)
        {
            return 3.14*r*r;
        }
        int computeArea(int l)
        {
            return l;
        }
};   //ye allowed nahi h, ek hi naam ke exact functions nahi ho sakte
     //kuch na kuch to difference hina chaiye.
int main()
{
   area a1,a2;
   cout<< a1.computeArea(2) <<endl;
   cout<< a2.computeArea(4) <<endl;
}


//It is complile time.