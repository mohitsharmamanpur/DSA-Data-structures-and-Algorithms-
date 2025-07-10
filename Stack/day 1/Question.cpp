#include<iostream>
using namespace std;

class TwoStack 
{
    int *arr;  // Array for two stacks
    int top1;  // Top of Stack 1
    int top2;  // Top of Stack 2
    int size;  // Total size of array

public:
    // Constructor to initialize two stacks
    TwoStack(int s) 
    {
        this->size = s;
        top1 = -1;         // Stack 1 starts from left
        top2 = s;          // Stack 2 starts from right
        arr = new int[s];  // Memory allocation
    }

    // Destructor to free memory
    ~TwoStack() 
    {
        delete[] arr;
    }

    // Push in stack 1
    void push1(int num) 
    {
        if (top2 - top1 > 1) 
        {  // At least 1 empty space available
            top1++;  
            arr[top1] = num;
        } 
        else 
        {
            cout << "Stack Overflow in Stack 1" << endl;
        }
    }

    // Push in stack 2
    void push2(int num) 
    {
        if (top2 - top1 > 1) 
        {  // At least 1 empty space available
            top2--;  
            arr[top2] = num;
        } 
        else 
        {
            cout << "Stack Overflow in Stack 2" << endl;
        }
    }

    // Pop from stack 1
    int pop1() 
    {
        if (top1 >= 0) 
        {
            int ans = arr[top1];
            top1--;  // Move top1 back
            return ans;
        } 
        else 
        {
            cout << "Stack Underflow in Stack 1" << endl;
            return -1;
        }
    }

    // Pop from stack 2
    int pop2() 
    {
        if (top2 < size) 
        {
            int ans = arr[top2];
            top2++;  // Move top2 forward
            return ans;
        } 
        else 
        {
            cout << "Stack Underflow in Stack 2" << endl;
            return -1;
        }
    }
};

// Driver Code
int main() 
{
    TwoStack ts(5);

    ts.push1(10);
    ts.push2(20);
    ts.push1(30);
    ts.push2(40);
    ts.push1(50);
    ts.push2(60);  // This should give stack overflow

    cout << "Popped from Stack 1: " << ts.pop1() << endl;
    cout << "Popped from Stack 2: " << ts.pop2() << endl;

    return 0;
}
