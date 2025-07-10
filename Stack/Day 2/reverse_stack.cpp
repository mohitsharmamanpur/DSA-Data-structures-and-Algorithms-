#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& s, int element) {
    // Base case: if stack is empty, push the element
    if (s.empty()) {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    // Recursive call
    insertAtBottom(s, element);

    s.push(num);
}

void reverseStack(stack<int>& s) {
    // Base case: if stack is empty, nothing to reverse
    if (s.empty()) {
        return;
    }

    int num = s.top(); // top element nikaal liya.
    s.pop();

    reverseStack(s);       // Recursive call to reverse the remaining stack

    insertAtBottom(s, num);    // Insert the stored element at the bottom of the reversed stack
}

int main() {
    stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    cout << "Stack before reversal:" << endl;
    stack<int> tempStack = myStack; // Copy stack for display
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    reverseStack(myStack);                    // Reverse the stack. 

    cout << "Stack after reversal:" << endl;
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}
