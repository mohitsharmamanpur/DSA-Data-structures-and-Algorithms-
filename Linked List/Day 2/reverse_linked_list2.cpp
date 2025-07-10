#include<iostream>     // By Recursive solution.
using namespace std;

void reverse(node* &head , node* current , node* previous)
{
    // base case
   if(current == NULL)    // Jab hamara current last pe aa jai, head ko previous ko point kerwaq do.
   {
    head = previous;
    return;
   }

   //ab ek case solve kerna padega.
   node* forward = current->next;
   reverse(head , forward , current)
   current->next = previous;
}

node* reverseLinkedList(node* head)
{
    node* current = head;
    node* previous = NULL;
    reverse(head , current , previous)
    return head;
}