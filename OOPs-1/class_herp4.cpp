# include <iostream>
using namespace std;

class hero
{
public:
    int health;
 
    char level;  

    void print()
    {
        cout<< level <<endl;
    }    
};    

int main()
{
    hero ramesh;  

    ramesh.health = 70;
    ramesh.level = 'A';

     cout<< "Health is : "<< ramesh.health <<endl;
     cout<< "Level is : "<< ramesh.level <<endl;
   
    return 0;
}