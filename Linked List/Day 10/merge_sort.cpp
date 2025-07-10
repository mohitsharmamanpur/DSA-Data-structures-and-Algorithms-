node* findMid(node* head)
{
    node* slow = head;
    node* fast = head->next;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}


node* merge(node* left , node* right)
{
    if(left == NULL)
    return right;

    if(right == NULL)
    return left;

   node* ans = new node(-1);
   node* temp = ans;

  // Merge two sorted Linked List.
   while(left != NULL && right != NULL)
   {
    if(left->data < right->data)   //agar left ka data chota h, to hum data ko hamari final linked list m add kerte gai. 
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    else
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
   }

   while(left != NULL)
   {
    temp->next = left;
        temp = left;
        left = left->next;
   }
   while(right != NULL)
   {
     temp->next = right;
        temp = right;
        right = right->next;
   }
   ans = ans->next;
   return ans;
}


node* mergeSort(node* head)
{
    //base case
    if(head == NULL || head->next = NULL)    //agar humari linked list empty h or agar sirf ek hi element h.
    {
        return head;
    }

  //break linked list into two halves.
    node* mid = findMid(head);

    node* left = head;         //left wala half head se suru hota h.
    node* right = mid->next;   //right wala half mid ke next se suru hota h.
    mid->next = NULL;          //left wale ke last m NULL bhi daalna padega.

  //recursively call to sort both left and right.
    left = mergeSort(left);
    right = mergeSort(right);

    //merge both left and right halves.
    node* result = merge(left , right);

    return result;
}