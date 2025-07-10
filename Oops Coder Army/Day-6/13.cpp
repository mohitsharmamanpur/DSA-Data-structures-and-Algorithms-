//Now we will talk about pure virtual functios.
//Pure virtual function is also known as abstrat.
//We will make some changes in the same program.

#include<iostream>
#include<vector>
using namespace std;

class animal
{
   public:
      virtual void speak() = 0;   //--> It is called abstract class or virtual function.
        //  {
        //     cout<<"HuHu"<<endl;
        //  }
};

class dog: public animal
{
    public:
        void speak()
        {
            cout<<"Bark"<<endl;
        }     
};

class cat: public animal
{
    public:
        void speak()
        {
            cout<<"Mew"<<endl;
        }     
};


int main()   
{
    // animal *p;
    // p = new dog();
    // p->speak();

    //animal *p;
    vector<animal*> animals;
    animals.push_back(new dog());
    animals.push_back(new cat());
  //  animals.push_back(new animal());
    animals.push_back(new cat());
    animals.push_back(new dog());

    //Kaise likhoge.
    for(int i=0;i<animals.size();i++)
    {
        animals[i] -> speak();
    }
}
