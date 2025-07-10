// WAP to insert an element at the end of the stack.
// We will solve by recursion, we will solve only one case rest will be solve by recursion itself.

#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>& s, int x)
 {
    // Base case: if stack is empty, push the element
    if (s.empty()) 
    {
        s.push(x);
        return;
    }

    // Remove the top element
    int num = s.top();
    s.pop();

    // Recursive call
    solve(s, x);

    // Push the removed element back onto the stack
    s.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}

int main() {
    stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    int x = 0;
    cout << "Enter the element to push at the bottom: ";
    cin >> x;

    // Push the element at the bottom of the stack
    stack<int> updatedStack = pushAtBottom(myStack, x);

    // Output the elements of the stack after pushing the new element at the bottom
    cout << "Stack after pushing " << x << " at the bottom:" << endl;
    while (!updatedStack.empty()) {
        cout << updatedStack.top() << " ";
        updatedStack.pop();
    }
    cout << endl;

    return 0;
}
