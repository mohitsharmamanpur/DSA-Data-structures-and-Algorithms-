#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int>& s, int num) {
    // Base case: if stack is empty or the top element is less than or equal to num
    if (s.empty() || s.top() <= num) {
        s.push(num);
        return;
    }

    int top = s.top();
    s.pop();

    // Recursive call to sort the stack and find the right position for num
    sortedInsert(s, num);

    // Push the top element back onto the stack
    s.push(top);
}

void sortStack(stack<int>& s) 
{
    // Base case: if stack is empty, return
    if (s.empty()) {
        return;
    }

    int num = s.top();
    s.pop();

    // Recursive call to sort the remaining stack
    sortStack(s);

    // Insert the popped element in sorted order
    sortedInsert(s, num);
}

int main()
 {
    stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(3);
    myStack.push(1);
    myStack.push(4);
    myStack.push(2);

    cout << "Stack before sorting:" << endl;
    stack<int> tempStack = myStack; // Copy stack for display
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    // Sort the stack
    sortStack(myStack);

    cout << "Stack after sorting:" << endl;
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}
