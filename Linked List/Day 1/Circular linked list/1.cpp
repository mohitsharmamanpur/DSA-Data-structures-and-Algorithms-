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

void deleteNode(node* &tail , int value)
    {
        // if there is empty linked list.
        if(tail == NULL)
        {
            cout<<"List is empty;"<<endl;
            return;
        }
        else
        {
           // if there is non empty linked list.
           // assuming that "value" is present in the linked list.
            
           node* previous = tail;   // ek previous banaya jo ki point kar raha hoga tail ko.
           node* current = previous->next; // current hamesha previous se 1 aage hota h..

          while(current->data != value)
          {
            previous = current;
            current = current->next;
          }

          previous->next = current->next;

          // when 1 linked list is present.
            if(current == previous)
            {
                tail = NULL;
            }
          // when there is 2 node or greater then true
          if(tail == current)
          {
            tail = previous;
          }
          current->next = NULL;
          delete current;
        }
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

   deleteNode(tail , 3);
   print(tail);
}