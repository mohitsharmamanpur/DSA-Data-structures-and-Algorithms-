//middle find kerne weala function.
node* getMid(node* head)   //We will find the middle element by slow and fast concept. slow will travel one step and fast will travel 2 steps , so when fast reach the end part, our slow is on middle.
{
    node* slow = head;
    node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;      //Kyuki slow hamara middle pe baitha h.
}


//reverse wala function
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


bool isPalindrome(node* head)
{
    if(head->next = NULL)   //agar list empty h or agar list me sirf ek element h, to vo to palindrome hogi hi.
    {
        return true;
    }
        //step 1 -> get middle.
      node* middle = getMid(head);

      // step 2-> reverse list after middle.
      node* temp = middle->next;
      middle->next = reverse(temp);

      // step->3 compare both halves.
      node* head1 = head;                 // head1 pointer banaya jo ki head ko point ker raha h.      
      node* head2 = middle->next;         //head2 pointer banaya jo ki middle ke next ko print ker raha h.

      while(head2 != NULL)
      {
        if(head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
      }

      //step 4 -> repeat step 4. to make the linked list original.
      temp = middle->next;
      middle->next = reverse(temp);

      return true;
  
}