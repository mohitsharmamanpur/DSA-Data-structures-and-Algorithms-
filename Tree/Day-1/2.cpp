// Level order traversal in Binary Tree.

#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:
           int data;
           node* left;
           node* right;

    node(int d)
    {
        this-> data = d;
        this-> left = NULL;
        this-> right = NULL;
    }
};

node* buildTree(node* root)     //Function to create a tree.
{
    cout<<"Enter the data: "<< endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout<<"Enter data for inserting in left of: "<< data <<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of: "<< data <<endl;
    root->right = buildTree(root->right);
    return root;
}

//By the use of Queue, the things get easier.

void levelOrderTraversal(node* root)   
{
    queue<node*> q;    //Deleting from starting, and insertion from end--> so it behace like a Queue.
    q.push(root);     //--> Sabse pehle to humne queue me root ko daal liya
    q.push(NULL);     // Seperator.

    while( !q.empty())    //jab tak humara queue empty nahi ho jata
    {
        node* temp = q.front();      // Ek temp banaya, jisme queue ke front ko daal diya.
        q.pop();

        if(temp == NULL)   //Agar ye aagya to-> Purana level pura traverse ho chuka h.
        {
           cout<<endl;
           if(!q.empty())  //queue have more child node
           {
              q.push(NULL);  
           }
        }
      else
      {   
        cout<< temp->data <<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
  }
}

int main()
{
    node* root = NULL;

  //Creating a tree.
    root = buildTree(root);

    //Level order
    cout<<"Printing the level order traversal: "<<endl;
    levelOrderTraversal(root);

    return 0;
}
//  -2 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1      
