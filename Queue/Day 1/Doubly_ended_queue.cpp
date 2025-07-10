#include <iostream>
using namespace std;

class Deque 
{
    int* arr;
    int front;
    int rear;
    int size;

public:
    // Constructor
    Deque(int n) 
    {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Destructor to free allocated memory
    ~Deque() {
        delete[] arr;
    }

    // Push x in the front of the deque. Return true if it gets pushed.
    bool pushFront(int x) {
        // Check if deque is full
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) {  // Case 1
            return false;
        } else if (front == -1) {  // Case 2 (Empty queue)
            front = rear = 0;
        } else if (front == 0) {  // Case 3 (Wrap around)
            front = size - 1;
        } else {  // Case 4 (Normal case)
            front--;
        }

        arr[front] = x;  // Insert element
        return true;
    }

    // Push x in the rear of the deque. Return true if it gets pushed.
    bool pushRear(int x) {
        // Check if deque is full
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) {  // Case 1
            return false;
        } else if (front == -1) {  // Case 2 (Empty queue)
            front = rear = 0;
        } else if (rear == size - 1) {  // Case 3 (Wrap around)
            rear = 0;
        } else {  // Case 4 (Normal case)
            rear++;
        }

        arr[rear] = x;  // Insert element
        return true;
    }

    // Pop element from the front of the deque. Return the popped value or -1 if empty.
    int popFront() {
        if (front == -1) {  // Empty deque
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;  // Optional: Mark as deleted

        if (front == rear) {  // Only one element was present
            front = rear = -1;
        } else if (front == size - 1) {  // Wrap around
            front = 0;
        } else {  // Normal case
            front++;
        }

        return ans;
    }

    // Pop element from the rear of the deque. Return the popped value or -1 if empty.
    int popRear() {
        if (front == -1) {  // Empty deque
            return -1;
        }

        int ans = arr[rear];
        arr[rear] = -1;  // Optional: Mark as deleted

        if (front == rear) {  // Only one element was present
            front = rear = -1;
        } else if (rear == 0) {  // Wrap around
            rear = size - 1;
        } else {  // Normal case
            rear--;
        }

        return ans;
    }

    // Get the front element. Return -1 if empty.
    int getFront() {
        if (front == -1) {
            return -1;
        }
        return arr[front];
    }

    // Get the rear element. Return -1 if empty.
    int getRear() {
        if (rear == -1) {
            return -1;
        }
        return arr[rear];
    }

    // Check if the deque is empty
    bool isEmpty() {
        return front == -1;
    }

    // Check if the deque is full
    bool isFull() {
        return (front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1));
    }
};

// Driver code to test the implementation
int main() {
    Deque dq(5);

    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushFront(5);
    dq.pushFront(3);
    dq.pushRear(30);

    cout << "Front: " << dq.getFront() << endl;  // Output: 3
    cout << "Rear: " << dq.getRear() << endl;    // Output: 30

    cout << "Popped from front: " << dq.popFront() << endl;  // Output: 3
    cout << "Popped from rear: " << dq.popRear() << endl;    // Output: 30

    cout << "Front: " << dq.getFront() << endl;  // Output: 5
    cout << "Rear: " << dq.getRear() << endl;    // Output: 20

    cout << "Is Empty: " << dq.isEmpty() << endl;  // Output: 0 (false)
    cout << "Is Full: " << dq.isFull() << endl;    // Output: 0 (false)

    return 0;
}
