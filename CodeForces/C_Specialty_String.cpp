#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n % 2)
        {
            cout << "NO\n";
            continue;
        }

        vector<int> freq(26, 0);

        for (char c : s)
        {
            freq[c - 'a']++;
        }

        stack<char> st;
        for (char ch : s)
        {
            if (st.empty() || st.top() != ch)
            {
                st.push(ch);
            }
            else
            {
                st.pop();
            }
        }

        if (st.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
