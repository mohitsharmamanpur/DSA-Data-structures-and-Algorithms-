// #include<iostream>                       // Function to perform bubble sort on an array
// using namespace std;


                                                      
// void bubbleSort(int arr[] , int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-i-1;j++)  // j<(n-i-1) krenge for more optimal code..kyuki last wala 
//                                 // element har round/pass ke badh apne aap apni correct 
//             if(arr[j] > arr[j+1]) // position pe aata jaiga...isliye unko compare kerne ki
//             {                     //jrurat nii h..
//                 swap(arr[j] , arr[j+1]);
//             }
//         }
//     }



// void printArray(int arr[] , int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout << arr[i] <<" ";
//     }
//     cout<<endl;
// }




// int main()
// {
//     int arr[5] = {4,2,3,7,6};

//     cout<<"array before sorting is:"<< " "<<endl;
//     printArray(arr , 5);

//     bubbleSort( arr , 5);

//     cout<<" array after swapping is:"<<" "<<endl;
//     printArray(arr , 5);

        
// return 0;
// }








#include<iostream>
using namespace std;

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() 
{
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Elements are: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bubbleSort(arr , n);

    cout<<"Sorted elements are: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 
    return 0;
}











