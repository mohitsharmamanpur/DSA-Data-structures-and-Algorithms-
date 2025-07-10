#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //File ko open karna
    ofstream fout;          //fout is a object.
    fout.open("zoom.txt"); //create kar dega or open kar dega
    //write kar sakta hu
    fout<<"Hello India";

    fout.close();   //resourse release kar paaun.
}