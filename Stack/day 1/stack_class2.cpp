//Stack implementation using linked list.

#include <iostream>
using namespace std;

// Node structure for stack
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Stack class using linked list
class Stack {
private:
    Node* top;

public:
    // Constructor
    Stack() {
        top = nullptr;
    }

    // Push operation
    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
        cout << data << " pushed into stack\n";
    }

    // Pop operation
    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << temp->data << " popped from stack\n";
        delete temp;  // Free memory
    }

    // Peek operation
    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Destructor to free memory
    ~Stack() {
        while (top) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }
};

// Driver Code
int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.peek() << endl;

    st.pop();
    cout << "Top element: " << st.peek() << endl;

    st.pop();
    cout << "Top element: " << st.peek() << endl;

    st.pop();

    if (st.isEmpty()) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack is not empty\n";
    }

    return 0;
}
