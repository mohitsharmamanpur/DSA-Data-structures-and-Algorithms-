#include <iostream>
using namespace std;

void findIntersection(int arr1[], int size1, int arr2[], int size2) 
{
    cout << "Intersection: ";
    bool found = false;                                  // To check if we found any intersection

    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            if (arr1[i] == arr2[j])
             {
                cout << arr1[i] << " ";
                found = true;                             // We found at least one intersection
                break;                                    // No need to check further in arr2
            }
        }
    }
    
    if (!found) {
        std::cout << "No intersection found.";
    }
    
    cout<<endl;
}

int main() 
{
    const int size1 = 5;
    const int size2 = 5;
    
    int arr1[size1] = {1, 2, 3, 4, 5};
    int arr2[size2] = {4, 5, 6, 7, 8};

    findIntersection(arr1, size1, arr2, size2);

    return 0;
}
