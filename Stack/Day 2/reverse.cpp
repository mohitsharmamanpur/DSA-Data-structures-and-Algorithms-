// Reverse a string with the help of an Stack?
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string str = "Mohit sharma";    //ek string le li.

    stack<char> s;   //ek stack banaya (s) naam ka.

    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];   //ek character banaya
        s.push(ch);        //ye character m daal dunga stack ke ander.
    }

    string ans = " ";     //ek ans banaya, empty string.

    while( ! s.empty())    //jab tak hamara stack empty nahi ho jata.
    {
        char ch = s.top();  //ek character uthaya jo ki stack ke top pe pada h.
        ans.push_back(ch);  // us character ko ans ke ander daal diya.

        s.pop();
    }

    cout<<"Answer is: "<< ans <<endl;   //phir ans print kerwa diya. 

    return 0;
}