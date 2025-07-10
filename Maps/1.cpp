//Basic Map (Ordered Map)
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> fruitPrice;

    // Inserting values
    fruitPrice["Apple"] = 100;
    fruitPrice["Banana"] = 40;
    fruitPrice["Mango"] = 80;

    // Accessing values
    cout << "Price of Apple: " << fruitPrice["Apple"] << endl;

    // Looping through the map
    for (auto pair : fruitPrice) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
