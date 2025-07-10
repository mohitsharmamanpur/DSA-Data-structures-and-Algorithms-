#include<iostream>// Find the starting node of the loop with the help of Floyds cycle detect algorithm. 
#include<map>
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

        ~node()          //destructor.
        {
            int value = this -> data;
            //memory free.
            if(this->next != NULL)
            {
                delete next;
                this->next = NULL;
            }
            cout<<"Memory is free for node with data"<< value <<endl;
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
     node* temp = head;  // ek temp bana liya jo ki head ko point kar raha hoga.
     while(temp != NULL) 
     {
        cout<< temp-> data <<" "; 
        temp = temp-> next; 
     }
     cout << endl;
  }

  void deleteNode(int position , node* &head)
  {
    //deleting starting node
    if(position == 1)
    {
       node* temp = head;
       head = head->next;  // pehle node delete kerni h, to head to uske agle node ko point kerwana padega , step 1 m...
       // 2nd step m memory free kerwa denge..--> destructor ka use karke...
       temp -> next = NULL;
       delete temp;
    }
    else
    {
        //deleting any middle node or last node.
        node* current = head;  // pointer jo starting m head ko point ker raha hoga.
        node* previous = NULL; //starting m null hoga.

        int count = 1;
        while(count < position)
        {
          previous = current;
          current = current->next;
          count++;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
  }

node* floyDetectLoop(node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    node* slow = head;  //pehle start or end ko humne head ko point kar diye.
    node* fast = head;

    while(slow != NULL && fast != NULL)
    {
        fast = fast->next;  //fast ko 2 baar badaya.
        if(fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;  //slow ko 1 baar badaya.

        if(slow == fast)  //har baar check kerte jaa rahe h, ki barabar huye kya.
        {
            cout<<"Present at "<<slow->data <<endl;
            return slow;
        }
    }
    return NULL;
}    

node* getStartingNode(node* head)
{
    if(head == NULL)
    return NULL;

node* intersection = floyDetectLoop(head);

node* slow = head;

while(slow != intersection)
{
    slow = slow->next;
    intersection = intersection->next;
}
return slow;
}

int main()
{
  node* node1 = new node(10);

  node* head = node1;
  node* tail = node1;

  insertAtTail(tail , 12);
  insertAtTail(tail , 15);

  insertAtPosition(tail , head , 4 , 22);

  tail ->next = head ->next;

  cout<<"head "<<head->data <<endl;
  cout<<"tail "<<tail->data <<endl;
//   print(head);

if(floyDetectLoop(head) != NULL)
{
    cout<<"Cycle is present: "<<endl;
}
else
{
    cout<<"No cycle"<<endl;
}


cout<<"Loop starts at: "<< getStartingNode(head)->data <<endl; 

    return 0;
    
}

