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


  node* sortList(node* head)
  {
     int zeroCount = 0;
     int oneCount = 0;
     int twoCount = 0;

     node* temp = head;
     while(temp != NULL)
     {
        if(temp->data == 0)
        zeroCount++;
        else if(temp->data == 1)
        oneCount++;
        // else(temp->data == 2)
        // twoCount++;

        temp = temp->next; 
     }

     temp = head;
     while(temp != NULL)
     {
        if(zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        if(twoCount != 0)
        {
            temp->data = 2;
            twoCount--;
        }
        return head;
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
