# include <iostream>
using namespace std;

class hero
{
private:
    int health;
public: 
    char level;   


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
 
int main()
{
    // creating object using Static allocation.
    hero a;
    a.setHealth();
    a.setLevel('B');
    cout<<"Level is : "<< a.level <<endl;
    cout<<"Health is : "<< a.gethealth() <<endl;

    // creating object using Dynamic allocation.
    hero *b = new hero;
    b->setLevel('A');
    b->setHealth();
    cout<<"Level is : "<<(*b).level<<endl;
    cout<<"Health is : "<<(*b).gethealth()<<endl;

 
    return 0;
}
 