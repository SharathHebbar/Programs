// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        char a;
        stack<char> st;
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] == '(' || x[i] == '{' || x[i] == '[')
                st.push(x[i]);
            if (st.empty())
                return false;
            switch (x[i])
            {
            case ')':
                a = st.top();
                st.pop();
                if (a == '[' || a == '{')
                    return false;
                break;
            case '}':
                a = st.top();
                st.pop();
                if (a == '[' || a == '(')
                    return false;
                break;
            case ']':
                a = st.top();
                st.pop();
                if (a == '(' || a == '{')
                    return false;
                break;
            }
        }
        return (st.empty());
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    string a;

    cin >> a;
    Solution obj;
    if (obj.ispar(a))
        cout << "balanced" << endl;
    else
        cout << "not balanced" << endl;

} // } Driver Code Ends