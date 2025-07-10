//Map Operations
#include<iostream>
#include<map>
using namespace std;

int main()
{

map<string, int> m;

// Insert
m.insert({"Orange", 60});
m["Grapes"] = 70;

// Check existence
if (m.find("Grapes") != m.end()) {
    cout << "Grapes is available\n";
}

// Delete
m.erase("Orange");

// Size
cout << "Total items: " << m.size() << endl;
}