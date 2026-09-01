#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string s = "(()())";
    stack<char> st;

    for(char c : s)
    {
        if(c == '(')
            {
                st.push(c);
            }
        else
        {
            if(st.empty())
            {
                cout << "Invalid" << endl;
                return 0;
            }

            st.pop();
        }
    }

    if(st.empty())
        cout << "Valid" <<endl;
    else
        cout << "Invalid" <<endl;

    return 0;
}