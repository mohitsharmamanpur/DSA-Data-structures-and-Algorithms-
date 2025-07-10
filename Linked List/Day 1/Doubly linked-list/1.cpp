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

void insertAtHead(node* &head , int d)
{
    node* temp = new node(d);  // pehle ek naya node create ksr lenge.
    temp->next = head;  
    head->previous = temp;
    head = temp;
}

void insertAtTail(node* &tail , int d)
{
    node* temp = new node(d);
    tail->next = temp;
    temp->previous = tail;
    tail = temp;
}

void insertAtPosition(node* &tail , node* &head , int position , int d)
{
    //insert at starting.
    if(position == 1)
    {
        insertAtHead(head , d);
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
        insertAtTail(tail , d);
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
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    print(head);

    cout<<"Length of linked list is: "<< getLength(head) <<endl;

    insertAtHead(head , 11);
    print(head);

    insertAtHead(head , 13);
    print(head);

    insertAtHead(head , 10);
    print(head);

    insertAtTail(tail , 25);
    print(head);

    insertAtPosition(tail , head , 2 , 100);
    print(head);

    insertAtPosition(tail , head , 1 , 101);
    print(head);

    insertAtPosition(tail , head , 8 , 102);
    print(head);

    


}