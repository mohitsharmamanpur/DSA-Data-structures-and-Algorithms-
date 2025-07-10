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

  void print( node* &head)
  {  
     node* temp = head;  
     while(temp != NULL) 
     {
        cout<< temp-> data <<" "; 
        temp = temp-> next;  
     }
     cout << endl;
  }


void insertAtTail(node* &tail, node* current ) {
    tail -> next = current;
    tail = current;
}


node* sortList(node *head)
{           // I will create some dummy nodes and create head and tail pointers.
    node* zeroHead = new node(-1);
    node* zeroTail = zeroHead;
    node* oneHead = new node(-1);
    node* oneTail = oneHead;
    node* twoHead = new node(-1);
    node* twoTail = twoHead;
    
    node* current = head;
    
    // create separate list 0s, 1s and 2s
    while(current != NULL) {
        
        int value = current -> data;
        
        if(value == 0) {
            insertAtTail(zeroTail, current);
        }
        else if(value == 1) {
            insertAtTail(oneTail, current);
        }
        else if(value == 2) {
            insertAtTail(twoTail, current);
        }       
        current = current -> next;
    }

    // Now merge 3 sublists.

    // 1s list is non-empty.
    if(oneHead->next != NULL)
    {
      zeroTail->next = oneHead->next;
    }
    else
    {
        // 1s list is empty
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    // head setup
    head = zeroHead->next;

    //delete dummy nodes.
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
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
