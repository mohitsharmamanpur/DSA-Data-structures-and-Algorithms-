node* reverse(node* head)       
{
    node* current = head;
    node* previous = NULL;
    node* next = NULL;

    while(current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    return previous;

}

void insertAtTail(struct node* &head , struct node* &tail , int value)
{
    node* temp = new node(value);
    //empty list.
    if(head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
       tail->next = temp;
       tail = temp;

    }
}


struct node* addTwoLists(struct node* first , struct node* second);
{
    int carry = 0;                   //initially carry 0 hogi..
    node* ansHead = NULL;
    node* andTail = NULL;
    while(firsr != NULL && second != NULL)
    {
        int sum = carry + first->data + second->data;

        int digit = sum%10;
        
        //create node and add in answer linked list.
        insertAtTail(ansHead , ansTail , digit);

        carry = sum/10;

        first = first->next;
        second = second->next;
    }

    while(first != NULL)
    {
        int sum = carry + first->data;
        int digit = sum%10;
        
        //create node and add in answer linked list.
        insertAtTail(ansHead , ansTail , digit);

        carry = sum/10;

         first = first->next;
    }

    while(second != NULL)
    {
        int sum = carry + second->data;
        int digit = sum%10;
        
        //create node and add in answer linked list.
        insertAtTail(ansHead , ansTail , digit);

        carry = sum/10;

        second = second->next;
    }

    while(carry != 0)         //jab last m, add krne ke liye kuch nii h per carry aa rii h.
    {
        int sum = carry;
        int digit = sum % 10;
        
        //create node and add in answer linked list.
        insertAtTail(ansHead , ansTail , digit);

        carry = sum/10;
    }
    return ansHead;
}


struct node* addTwoLists(struct node* first , struct node* second)
{
    //step 1-> reverse input linked list.
    first = reverse(first);
    second = reverse(second);

    // step 2-> add two linked list.
    node* ans = add(first , second);

    // step 3->  and reverse.
    ans = reverse(ans);

    return ans;
}    