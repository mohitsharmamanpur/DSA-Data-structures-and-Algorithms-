// #include<iostream>
// using namespace std;

// node* getMiddle(node* head)
// {
//     if(head == NULL || head->next == NULL)
//     return NULL;

//    //if 2 nodes
//    if(head->next->next == NULL)
//    {
//      return head->next;
//    }

//    node* slow = head;
//    node* fast = head->next;

// while(fast != NULL)
// {
//     fast = fast->next;
//     if(fast != NULL)
//     {
//         fast = fast->next;
//     }
//     slow = slow->next;
// }
//   return slow;
// }

// node* findMiddle(node* head)
// {
//     return getMiddle(head);
// }

#include <iostream>
using namespace std;

// Define the node structure
struct node {
    int data;
    node* next;
};

// Function to get the middle node of the linked list
node* getMiddle(node* head) {
    if (head == NULL) {
        return NULL; // Return NULL if the list is empty
    }
    
    node* slow = head;
    node* fast = head;

    // Move fast pointer by 2 and slow pointer by 1
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next; // Move fast by 2 nodes
        slow = slow->next;       // Move slow by 1 node
    }
    
    return slow; // Slow will be at the middle node when fast reaches the end
}

// Function to find the middle node (wrapper function)
node* findMiddle(node* head) {
    return getMiddle(head);
}

// Example usage
int main() {
    // Create a simple linked list for demonstration
    node* head = new node{1, nullptr};
    head->next = new node{2, nullptr};
    head->next->next = new node{3, nullptr};
    head->next->next->next = new node{4, nullptr};
    head->next->next->next->next = new node{5, nullptr};

    node* middle = findMiddle(head);
    if (middle != nullptr) {
        cout << "The middle element is: " << middle->data << endl;
    } else {
        cout << "The list is empty." << endl;
    }

    // Clean up the linked list (optional)
    while (head != nullptr) {
        node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
