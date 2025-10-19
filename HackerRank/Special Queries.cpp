#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    stack<string> st;
    while (t--)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            string Name;
            cin >> Name;
            st.push(Name);
        }
        else if (command == 1)
        {
            if (st.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << st.top() << endl;
                st.pop();
            }
        }
    }

    return 0;
}
