// #include<iostream>
// using namespace std;

//  class node
//     {
//     public:
//         int data;
//         node *next;

//         node(int data)
//         {
//             this->data = data;
//             this->next = NULL;
//         }
//     };

// node* KReverse(node* head , int k)
// {
//   if(head == NULL)
//   {
//     return NULL;
//   }

//     // step-1->  reverse first K nodes.
//     node* next = NULL;        // first we have to make all nodes.
//     node* current = head;
//     node* previous = NULL;

//     int count = 0;
//     while(current != NULL && count < k)
//     {
//         next = current->next;
//         current->next = previous;
//         previous = current;
//         current = next;
//         count++;
//     }

//     // step-2-> recursion dekh lega aage ka.
//     if(next != NULL)
//     {
//         head->next = KReverse(next , k);
//     }

//     // step-3-> return head of reversed list.
//     return previous;

// }


// // Time Complexity = O(n)
// // Space Complexity = O(n)


#include <iostream>
using namespace std;

class node 
{
public:
    int data;
    node *next;

    node(int data) 
    {
        this->data = data;
        this->next = NULL;
    }
};

// Function to reverse the linked list in groups of k
node* KReverse(node* head, int k) {
    if (head == NULL) {
        return NULL;
    }

    // Step 1: Reverse the first k nodes
    node* next = NULL;
    node* current = head;
    node* previous = NULL;

    int count = 0;
    while (current != NULL && count < k) 
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
        count++;
    }

    // Step 2: Recursively call KReverse for the next part
    if (next != NULL) {
        head->next = KReverse(next, k);
    }

    // Step 3: Return the new head of the reversed list
    return previous;
}

// Function to print the linked list
void printList(node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Main function to demonstrate KReverse
int main() {
    node* head = NULL;

    int n, k;

    // Create a linked list
    cout << "Enter number of elements in the linked list: ";
    cin >> n;

    // Directly creating the linked list
    if (n > 0) {
        cout << "Enter the elements: ";
        int data;
        cin >> data; // Read the first element
        head = new node(data); // Initialize head with the first node
        node* current = head; // Keep track of the current node

        for (int i = 1; i < n; i++) {
            cin >> data;
            current->next = new node(data); // Create and link new nodes
            current = current->next; // Move to the new node
        }
    }

    cout << "Enter the value of k for KReverse: ";
    cin >> k;

    cout << "Original Linked List: ";
    printList(head);

    head = KReverse(head, k);

    cout << "K-Reversed Linked List: ";
    printList(head);

    return 0;
}
