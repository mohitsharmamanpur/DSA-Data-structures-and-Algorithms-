#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool findRedundantBrackets(const string& s)
 {
    stack<char> st;
           
    for (int i = 0; i < s.length(); i++) 
    {
        char ch = s[i];  // Use [] for accessing characters in a string

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') 
        {
            st.push(ch);  // Use st.push(ch) to push the character onto the stack
        } else if (ch == ')')
         {
            bool isRedundant = true;
            while (!st.empty() && st.top() != '(') 
            {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/') 
                {
                    isRedundant = false;  // Found an operator inside the brackets
                }
                st.pop();
            }
            if (st.empty())
             {
                return false;  // No opening bracket found for the closing bracket
            }
            st.pop();  // Pop the opening bracket '('

            if (isRedundant) 
            {
                return true;  // Redundant brackets found
            }
        }
    }
    return false;  // No redundant brackets found
}

int main()
 {
    string expression;

    cout << "Enter the expression: ";
    cin >> expression;

    if (findRedundantBrackets(expression)) 
    {
        cout << "The expression contains redundant brackets." << endl;
    }
     else
     {
        cout << "The expression does not contain redundant brackets." << endl;
    }

    return 0;
}
