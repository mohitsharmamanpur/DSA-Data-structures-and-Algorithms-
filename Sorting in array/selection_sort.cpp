// #include<iostream>                //Function to perform selection sort.
// using namespace std;


// void printArray(int arr[] , int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout << arr[i] <<" ";
//     }
//     cout<<endl;
// }

// void selectionSort(int arr[] , int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         int middleindex = i;

//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j] < arr[middleindex])
//             {
//             middleindex = j;
//             }
//         }
        
//         if(middleindex != i)
//         {
//             int temp;
//             temp = arr[i];
//             arr[i] = arr[middleindex];
//             arr[middleindex] = temp;
//         }
//     }
// }



// int main()
// {
//     int arr[5] = {4,2,7,5,3};

//     cout<<"Original array"<< arr;
//     printArray( arr , 5);

//     selectionSort(arr , 5);
    
//     cout<<"Sorted array is :"<<arr;
//     printArray(arr , 5);
//     return 0;
// }



#include<iostream>                //Function to perform selection sort.
using namespace std;


void selectionSort(int arr[] , int n)
{
    for(int i=0;i<n-1;i++)
    {
        int middleindex = i;    

        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[middleindex])
            {
            middleindex = j;
            }
        }
        
        if(middleindex != i)
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[middleindex];
            arr[middleindex] = temp;
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

  selectionSort(arr,n);

  cout<<"Sorted elements are: "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  return 0;
}

