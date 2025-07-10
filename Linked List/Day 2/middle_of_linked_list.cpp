// #include<iostream>
// using namespace std;

// int getLength(node* head)
// int length = 0;
// while(head != length)
// {
//   length++;
//   head = head->next;
// }

// node *findMiddle(node *head)
// {
//     int length =  getLength(head);
//     int ans = (length/2) + 1;
//     return ans;
// }

#include <iostream>
using namespace std;

// Define the node structure
struct node 
{
    int data;
    node* next;
};

// Function to get the length of the linked list
int getLength(node* head)  
{
    int length = 0;
    while (head != NULL) 
    {
        length++;
        head = head->next;
    }
    return length; // Return the length of the list
}

// Function to find the middle node of the linked list
node* findMiddle(node* head) 
{
    int length = getLength(head);
    int midIndex = length / 2; // Index of the middle node
    node* current = head;
    
    // Traverse to the middle node
    for (int i = 0; i < midIndex; i++) 
    {
        current = current->next;
    }
    
    return current; // Return the middle node
}

// Example usage
int main() 
{
    // Create a simple linked list for demonstration
    node* head = new node{1, NULL};
    head->next = new node{2, NULL};
    head->next->next = new node{3, NULL};
    head->next->next->next = new node{4, NULL};
    head->next->next->next->next = new node{5, NULL};

    node* middle = findMiddle(head);
    if (middle != NULL) 
    {
        cout << "The middle element is: " << middle->data << endl;
    } else 
    {
        cout << "The list is empty." << endl;
    }

    // Clean up the linked list (optional)
    while (head != NULL) 
    {
        node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
