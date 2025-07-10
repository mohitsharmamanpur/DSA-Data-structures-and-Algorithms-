#include<iostream>
using namespace std;

class CircularQueue
{
    int *arr;
    int size;
    int front;
    int rear;

    public:
           //initilise the queue
           CircularQueue(int n)
           {
            size = n;
            arr = new int[size];
            front = rear = -1;
           }

       // insertion operation inside queue
    bool enqueue(int value)
    {
        if( (front == 0 && rear == size-1) || rear == (front-1)%(size-1))   // agar queue full h, to hum insert nahi kar sakte.
        {
            cout<<"Queue is full"<<endl;
            return false;
        }
        else if(front == -1)   // ye condition tab h jab, hum pehla element insert kar rahe h.
        {
            front = rear = 0;
            arr[rear] = value;
        }
        else if(rear == size-1 && front != 0)   //agar rear end tak pouch chuka h, to rear ko starting m le aao...ab starting m element add hoga.
        {
            rear = 0;
            arr[rear] = value;
        }
        else                //normal case.
        {
            rear++;
            arr[rear] = value;
        }
    }
  

    // delete or pop operation in queue.
    int dequeue() 
    {
        if (front == -1) 
        {                                     // If queue is empty
            cout << "Queue is empty" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;                               // Optional: Mark as deleted

        if (front == rear) 
        {                                        // Single element condition
            front = rear = -1;
        } 
        else if (front == size - 1) 
        {                                            // Wrap around case
            front = 0;
        } 
        else 
        {                                                // Normal case
            front++;
        }
        return ans;
    }
};