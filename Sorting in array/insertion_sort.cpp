// #include<iostream>                       //Function to perform insertion sort using for loop.
// using namespace std;

// void printArray(int arr[] , int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<< arr[i] <<" ";
//     }
//     cout<<endl;
// }


// void insertionSort(int arr[] , int n)
// {
//     for(int i=1;i<n;i++)
//     {
//         int temp = arr[i];
//         int j=i-1;
//         for( ;j>=0;j--)
//         {
//             if(arr[j] > temp)
//             {
//                 arr[j+1] = arr[j];
//             }
//             else{
//                 break;
//             }
//         } 
//         arr[j+1] = temp;
//     }
// }



// int main()
// {
//     int arr[5] = {4,2,7,5,1};

//     cout<<"array before swapping is:"<<" "<<endl;
//     printArray(arr , 5);

//     insertionSort(arr , 5);

//     cout<<"array after sorting is:"<<" "<<endl;
//     printArray(arr , 5);

//     return 0;
// }








#include<iostream>                       //Function to perform insertion sort using while loop.
using namespace std;

void printArray(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}


void insertionSort(int arr[], int n) 
{  
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];                         
        int j = i - 1;

        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];    
            j--;
        }
        arr[j + 1] = key;
    }
}



int main()
{
    int arr[5] = {4,2,7,5,1};

    cout<<"array before swapping is:"<<" "<<endl;
    printArray(arr , 5);

    insertionSort(arr , 5);

    cout<<"array after sorting is:"<<" "<<endl;
    printArray(arr , 5);

    return 0;
}