// Iteration through map.

#include<iostream>
#include <unordered_map>
using namespace std;
int main()
{
for (auto it = m.begin(); it != m.end(); ++it) {
    cout << it->first << " = " << it->second << endl;
}
}
