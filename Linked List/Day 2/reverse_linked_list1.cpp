#include<iostream>    // By iterative.
using namespace std;

node* reversedLinkedList(node* head)
{
    if(head == NULL || head->next == NULL)   // case when there is an empty linked list and when there is only one element.
    {
        return head;
    }

    node* previous = NULL;    //pehle 3no node create kar lo.
    node* current = head;
    node* forward = NULL;


    while(current != NULL)
    {
        forward = current->next;     // pointer ko piche ghuma denge.
        current->next = previous;
        previous = current;         // update the pointer.
        current = forward;
    }
    return previous;
}