// Without using STL. Hamari khudki banai hui class honi chaiye.

//This is implememtation of stack using array.

#include<iostream>    //we can implement stack using array and linked list.
using namespace std;

class stack
{
   public:    
               // properties.
          int *arr;    //ek array to hona hi chaiye
          int top;     //top-> Index bhi hona chaiye jisme apan element insert kar sakhe
          int size;    //size bhi pta honi chaiye.. kyuki mko pta bhi to ho ki mane array pura reach kar liya h.

          // behaviour.

       stack(int size)
       {
        this -> size = size;     // we have initialized the size of array
        arr = new int[size];     // we have provide tha memory allocation.
        top = -1;                // we have initialized the top.
       }   

       void push(int element)    //ye dekna padega ki stack khali to h ya nii.
       {
         if(size-top > 1)  // agar esa h to, apne pass khali space available h.
         {
           top++;
           arr[top] = element;     
         }
         else
         {
            cout<<"Stack overflow"<<endl;
         }
       }
       void pop()
        {
          if(top>=0)
          {
            top--;
          }
          else
          {
            cout<<"Stack underflow"<<endl;
          }
        }
        int peek()
        {
           if(top >= 0)
           {
           return arr[top];
           }
        else
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
     }

     bool isEmpty()
     {
        if(top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
     }

};

int main()
{
   stack st(5);

   st.push(22);         //5 size ka stack h, lakin humne 6 value daal rakhi h, so stack overflow hoga.
   st.push(43);
   st.push(44);
   st.push(22);
   st.push(43);
   st.push(44);

   cout<< st.peek() <<endl;

   st.pop();
   cout<< st.peek() <<endl;

    st.pop();
   cout<< st.peek() <<endl;

    st.pop();
   cout<< st.peek() <<endl;

    if(st.isEmpty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Stack is not empty"<<endl;
    }
}
