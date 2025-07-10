# include <iostream>
using namespace std;

class hero
{
private:
    int health;
public: 
    char level; 

       // default constructor.
    hero()
    {
        cout<<"constructor called"<<endl;
    }  

   
     // parematrised constrctor.
  hero(int health)
  {
    health = health;
  }     


int gethealth()
{
    return health;
}
int setHealth()
{
    return health = 70;
}
char getLevel()
{
    return level;
}
char setLevel(char ch)
{
    return level = ch;
}  
};    
                //constructor is envoked during the time of object creation.
int main()
{
    // object created statically.
    hero ramesh;                  //-> isse apna constructor called ho jata h...  
    // object created dynamically.
    hero *h = new hero;           //-> isse apna constructor called ho jata h...  






    // // creating object using Static allocation.
    // hero a;
    // a.setHealth();
    // a.setLevel('B');
    // cout<<"Level is : "<<a.level <<endl;
    // cout<<"Health is : "<<a.gethealth()<<endl;

    // // creating object using Dynamic allocation.
    // hero *b = new hero;
    // b->setLevel('A');
    // b->setHealth();
    // cout<<"Level is : "<<(*b).level<<endl;
    // cout<<"Health is : "<<(*b).gethealth()<<endl;

 
    return 0;
}
 