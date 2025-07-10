// Check if the given Linked List is circular or not/
// check in circular linked list.
#include<iostream>
using namespace std;
                       
class node
{
    public:
           int data;
           node* next;
    
           //constructor
         node(int d)
         {
            this->data = d;
            this->next = NULL;
         }

          //destructor.    
         ~node()
         {
            int value = this->data;
            if(this->next != NULL)
            {
                delete next;
                next = NULL; 
            }
            cout<<"memory is free for node with data "<<value<<endl;
         }  
};

void insertNode(node* &tail , int element , int d)
{
    // assuming that the element is present in the list.
    
    // case 1-> if there is a empty list.
    if(tail == NULL)
    {
        node* newNode = new node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // case 2-> if there is a non empty list.
        // assuming that the element is present in the list.

        node* current = tail;
        while(current->data != element)
        {
            current = current->next;
        }

        //element found-> current is representing , element wala node
        node* temp = new node(d);
        temp->next = current->next;
        current->next = temp;

    }
}

// traverse kraane ke liye. do while lagana padega,kyuki agar single node hui to hum usko print nii kerwa payenge...
void print(node* tail)
{
    node* temp = tail;   // pehle tail ka address temp m save ker lo.
    
    if(tail == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }

    do{
        cout<< tail->data<< " ";
        tail = tail->next;
    }
    while(tail != temp); // circular linked list h, to pehle tail ko print kerwayenge phir tail ke next ke datas ko print kerwaate chelenge....jab tak dubara tail ni aa jata.
       cout<<endl;
}


bool isCircularList(node* head)
{
    if(head == NULL)
    {
        return true;
    }

// case when there is single node or more than one node.
    node* temp = head-> next;
    while(temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if(temp == head)
    {
        return true;
    }

    return false;
}

int main()
{
   node* tail = NULL;
  // empty list m insert ker rahe h
   insertNode(tail , 5 , 3);
   print(tail);

   insertNode(tail , 3 , 5);
   print(tail);

    insertNode(tail , 5 , 7);
   print(tail);

    insertNode(tail , 7 , 9);
   print(tail);

    insertNode(tail , 5 , 6);
   print(tail);

    insertNode(tail , 9 , 10);
   print(tail);

    insertNode(tail , 3 , 4);
   print(tail);


if(isCircularList(tail))
{
    cout<<"Linked list is circular"<<endl;
}
else
{
    cout<<"Linked List is not circular"<<endl;
}
}