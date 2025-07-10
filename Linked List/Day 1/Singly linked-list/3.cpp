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
    
}


// so we have learned about inserting element at end..
// now 1 more thing comes..
// we can also insert element at middle..