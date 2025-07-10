// WAP to delete a middle element from the stack.   
// We will solve by recursion, we will solve only one case, rest case will be solved by recursion.

#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>& inputStack, int count, int size) 
{
    // Base case: if count reaches the middle, pop the element
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();     // Remove the top element and recursively call solve
    inputStack.pop();

    solve(inputStack, count + 1, size);       // Recursive call

    inputStack.push(num);       // Push the element back onto the stack
}

void deleteMiddle(stack<int>& inputStack) {
    int size = inputStack.size();
    if (size == 0)
     return;              // Empty stack, nothing to delete

    int count = 0;
    solve(inputStack, count, size);
}

int main() {
    stack<int> myStack;

    for (int i = 1; i <= 5; ++i)     // Pushing elements onto the stack
    {
        myStack.push(i);
    }

    deleteMiddle(myStack);          // Delete the middle element

    // Output the elements of the stack after deleting the middle element
    cout << "Stack after deleting the middle element:" << endl;
    while ( ! myStack.empty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}
