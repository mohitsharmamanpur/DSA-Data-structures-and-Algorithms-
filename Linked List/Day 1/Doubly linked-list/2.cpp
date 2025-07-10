#include<iostream>
using namespace std;

class node
{
    public:
           int data;
           node* previous;
           node* next;

     //constructor.
     node(int d)
     {
        this->data = d;
        this->previous = NULL;
        this->next = NULL;
     }      
};

// traversing a linked list.
void print(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// gives length of linked list.
int getLength(node* head)
{
    int length = 0;
    node* temp = head;
    while(temp != head)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

void insertAtHead( node* &tail , node* &head , int d)
{
    //if there is empty list at the starting...
    if( head == NULL)
    {
      node* temp = new node(d);
      head = temp;
      tail = temp;
    }
    else
    {
    node* temp = new node(d);  // pehle ek naya node create ksr lenge.
    temp->next = head;  
    head->previous = temp;
    head = temp;
    }
}

void insertAtTail(node* &tail,node* &head, int d) {
    if(tail == NULL) {
        node* temp = new node(d);
        tail = temp;
        head = temp;
    }
    else{
        node* temp = new node(d);
        tail -> next  = temp;
        temp -> previous = tail;
        tail = temp;
    }

}


void insertAtPosition(node* &tail , node* &head , int position , int d)
{
    //insert at starting.
    if(position == 1)
    {
        insertAtHead(tail , head , d);
        return ;
    }

    node* temp = head;
    int count = 1;
    while(count < position-1)
    {
        temp = temp->next;
        count++;
    }

    //inserting at last position.
    if(temp->next == NULL)
    {
        insertAtTail(head , tail , d);
        return ;
    }

    //inserting at middle.
    node* nodeToInsert = new node(d);

    nodeToInsert->next = temp->next;
    temp->next->previous = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->previous = temp;
}

int main()
{
   //agar initially apan ne linked list ki length ko 0 rakh liyaa...
   //to head hamara null ho jaiga...
    node* head = NULL;
    node* tail = NULL;

    print(head);

    cout<<"Length of linked list is: "<< getLength(head) <<endl;

    insertAtHead(head , tail , 11);
    print(head);

     cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtHead(head , tail , 13);
    print(head);

     cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtHead(head , tail , 10);
    print(head);

     cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtTail(tail , head , 25);
    print(head);

     cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail , head , 2 , 100);
    print(head);

     cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail , head , 1 , 101);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail , head , 7 , 102);
    print(head);

     cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;



}