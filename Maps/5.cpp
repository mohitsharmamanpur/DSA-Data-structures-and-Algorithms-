// Advanced-example --> Frequency count.

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4};
    map<int, int> freq;

    for (int num : nums) {
        freq[num]++;
    }

    for (auto pair : freq) {
        cout << pair.first << " occurs " << pair.second << " times" << endl;
    }

    return 0;
}
