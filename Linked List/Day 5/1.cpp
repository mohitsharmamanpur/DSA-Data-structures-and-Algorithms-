#include<iostream>      // Remove duplicate from the sorted linked list.
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
  void insertAtHead( node* &head , int d)   // humne reference isliye liya h, taaki copy create na ho, hamari original linked list m hi change ho...
  {
     //new node createion.
     node* temp = new node(d);
     temp -> next = head;  //temp ka jo next h(null, jisko pointer point ker raha h) vo point krega head ko... 
     head = temp;   // head ko temp pe point kerwa do..  
  }  

  void print( node* &head)
  {
    //traversing in a linked list.
     node* temp = head;  // ek temp variable bana liya, jo ki head ko point kar raha hoga.
     while(temp != NULL) //jab tak vo temp null ke barabbar nii aa jata ...
     {
        cout<< temp-> data <<" "; //un sabhi ka data print kerwa do, jin jin ko apna temp point kar raha h..
        temp = temp-> next;  // or sath hi sath m , temp ko aage badathe hue chelo..
     }
     cout << endl;
  }

  node* uniqueSortedList(node* head)
{
    if(head == NULL)
    return NULL;

    // non empty list
    node* current = head;   // ek current pointer lenge jo ki, head ko point kar raha hoga.

    while(current != NULL)
    {
        if((current->next != NULL) && current->data == current->next->data)     //current ka next null nahi hona chaqiye && agar current ka data or current ke next ka data same h to, current pointer ko ek aage bada denge.
        {
            node* next_next = current->next->next;
            node* nodeToDelete = current->next;        //delete kerna padega jo repeat ho raha h.
            delete(nodeToDelete);

            current->next = next_next;
        }
        else
        {
            current = current->next;      // nahi to current ka next hi print kar denge.
        }
    }
    return head;
}

int main()
{
    //creating a new node..
    node* node1 = new node(10);
    //cout<< node1 -> data <<endl;
   //cout<< node1 -> next <<endl;

 // head point to node 1...
    node* head = node1;
    print(head);

    insertAtHead(head , 12);  
    print(head);

    insertAtHead(head , 15);  
    print(head);

    
    insertAtHead(head , 15);  
    print(head);

    
    insertAtHead(head , 15);  
    print(head);

    
    insertAtHead(head , 25);  
    print(head);

    
    insertAtHead(head , 32);  
    print(head);
}

//--> per isse kya ho raha h, order is terah ka h --> 15 12 10...
// lakin agar humko kuch is terah chaiye--> 10 12 15..
// to humhe tail ko include kerna padega.
//ek function add kerna padega, insertAtTail jo ki...
// ending node ke aage new node add krega.

//tail ek pointer hoga node type ka, ko ki hamesha last node ko hi darshyega.