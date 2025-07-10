// More optimal case. we cannot insert any element at 1st position in a linked list.
// to do this we have to include one case, which is as follows.
// same for last, if we want to insert an element at last, we have to update the tail.

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
    //Inserting an node.
  void insertAtHead( node* &head , int d)  
  {
     //new node createion.
     node* temp = new node(d);
     temp -> next = head;  
     head = temp;   
  }  

  void insertAtTail( node* &tail , int d)
  {
    //creating a new node.
    node* temp = new node(d);
    tail -> next = temp;  //tail ke next ko(jo ki agle ka address h), use temp ko point kerwa do.
    tail = temp;// kyuki tail to hamesha last hode per hi hogi..
  }

  void insertAtPosition(node* &tail , node* &head , int position , int d)
  {
    // inserting at starting
    if(position == 1)
    {
        insertAtHead(head , d);
        return;
    }
    // agar humko kisi n position per node ko insert kerna h, to humhe pehle (n-1) position tak jana padega ya traverse kerna padega.
      
      node* temp = head; // temp jo ki head ko point kar raha h
      int count = 1;   // initially node 1st position pe h.

      while( count < position-1)   // kaha tak jana hoga-->> (n-1) tak
      {
        temp = temp->next;    // temp ko badathe chelo
        count++;            // count ko bada do..
      }

      // inserting at last position.
      if(temp->next == NULL)
      {
        insertAtTail(tail , d);
        return;
      }

      // creating a node for d.
      node* nodeToInsert = new node(d);
      nodeToInsert->next = temp->next;
      temp->next = nodeToInsert;
  }

  void print( node* &head)
  {
    //traversing in a linked list.
     node* temp = head;  
     while(temp != NULL) 
     {
        cout<< temp-> data <<" "; 
        temp = temp-> next; 
     }
     cout << endl;
  }

int main()
{
    //creating a new node..
    node* node1 = new node(10);
    //cout<< node1 -> data <<endl;
   //cout<< node1 -> next <<endl;

 // head point to node 1...
    node* head = node1;
    node* tail = node1;  // kyuki agar ek hi node h to, wahi head hoga or wahi tail 
    print(head);

    insertAtTail(tail , 12); 
    print(head);

    insertAtTail(tail , 15);  
    print(head);

    insertAtPosition(tail , head , 4 , 22);
    print(head);

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    return 0;
    
}

