// Write a program to merge two sorted linked list.
#include<iostream>
using namespace std;

class node
{
    public:
            int data;
            node* next;

        node(int data)   //constructor.
        {
            this -> data = data;
            this -> next = NULL;
        }    
};

  void insertAtHead( node* &head , int d)  
  {
     node* temp = new node(d);
     temp -> next = head;  
     head = temp;    
  }  

  void print(node* &head)
  {  
     node* temp = head;  
     while(temp != NULL) 
     {
        cout<< temp-> data <<" "; 
        temp = temp-> next;  
     }
     cout << endl;
  }

node<int>* solve(node<int>* first , node<int>* second)
{
   //if only one element is present in linked list.
   if(first->next == NULL)
   {
     first->next = second;
     return first;
   }


    node* current1 = first;       //We will initiliase all three pointers.-> current1 , next1 , current2.
    node* next1 = current1->next;
    node* current2 = second;
    node* next2 = current2->next;

    while(next1 != NULL && next2 != NULL)   // next1 or next2 NULL pe nahi pouchne chaiye.
    {
        if( (current2->data >= current1->data) && (current2->data <= next1->data))    //agar ye condition true h, to node beech m daal dunga.
        {
            current1->next = current2;
            next2 = current2->next;
            current2->next = next1;

            current1 = current2;
            current2 = next2;
        }
        else                                                                          //agar nahi h, to m sirf pointers ko update krunga.
        {
            //go first step in first list.
            // matlab apna data uper waale ki range m lie nahi ar raha, to hum simply pointers ko aage bada denge. --> current1 or next1 ko aage badana padega.
            current1 = next1;
            next1 = next1->next;
            
            //we will make sure that next1 humara NULL na ho jai.
            if(next1 == NULL)    //We also have to make sure that next1 hamara NUll pe nahi pouch gaya ho.
            {
            current1->next = current2;
            return first;
            }
        }
    }
    return first;
}

node<int> sortTwoLists(node<int>* first , node<int>* second)
{
    if(first == NULL)    //agar pehli wali list NULL h, to second wali list answer ho jiage.
    return second;

    if(second == NULL)   //agar dusri wali list NULL h, to pehli wali list answer ho jaige.
    return first;

//first list esi banani padegi jiska data smaller ho.
if(first->data <= second->data)     // ek function banana padega, jisse hume pata chale ki hume first konsi linked list ko mananna h, or second konsi linked list ko manna h.
{                                   // Kyuki first usi linked list ko manenge jiska pehla element chota hoga.
  return solve(first , second);
}
else
{
   return solve(second , first);
}

}

int main()
{
    node* node1 = new node(1);

    node* head = node1;
    print(head);

    insertAtHead(head , 1);  
    print(head);

    insertAtHead(head , 0);  
    print(head);

    
    insertAtHead(head , 2);  
    print(head);

    
    insertAtHead(head , 1);  
    print(head);

    
    insertAtHead(head , 2);  
    print(head);

    
    insertAtHead(head , 0);  
    print(head);
}
