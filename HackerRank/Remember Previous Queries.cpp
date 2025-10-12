#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    list<int> l;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else if (x == 2)
        {
        }

        // print forward: 
        for(int val : l)
        {
            cout << val << " ";
        }
        cout << endl;

        // print backward:
        for(auto it = l.rbegin(); it != l.rend(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}