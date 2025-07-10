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
    hero ramesh; 

    cout<<"Health is : "<< ramesh.gethealth() <<endl;

    ramesh.setHealth();
    ramesh.level = 'A';

     cout<< "Health is : "<< ramesh.gethealth() <<endl;
     cout<< "Level is : "<< ramesh.level<<endl;
   
    return 0;
}