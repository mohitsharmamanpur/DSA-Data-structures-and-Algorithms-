# include <iostream>
using namespace std;

class hero
{
    int health;       //property.      In case of empty class, our object will get one byte.
};    

int main()
{
    hero h1;         // creating of object.
    
    cout<< "Size :" << sizeof(h1)<<endl;
    return 0;
}