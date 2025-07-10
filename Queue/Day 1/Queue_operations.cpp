#include<iostream>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

    public:        // constructor
        Queue()
        {
          size = 100000;
          arr = new int[size];    //pehle ek naya queue bana liya.
          front = 0;       //initially front or rear ko 0 hi rakhenge.
          rear = 0;        // constructor ke ander hi apan initialization kerte h.
        }


    // insertion operation.
   void enqueue(int data)     // enqueue means inserting
   {
    if(rear == size)
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        arr[rear] = data;
        rear++;
    }
   }

   //poping operation
   int dequeue()
   {
     if(front == rear)
     {
        return -1;
     }
     else
     {
       int ans = arr[front];
       arr[front] = -1;
       front++;
       if(front == rear)      // ye condition lagayenge taaki memory wastage na ho.
       {
        front = 0;
        rear = 0;
       }
       return ans;
     }
   }

      //front operation
      int front()
      {
        if(front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
      }

      // empty operation
      bool isEmpty()
      {
         if(front == rear)
         {
            return true;
         }
         else
         {
            return false;
         }
      }

};


// time complexity of all the above operations is o(n).