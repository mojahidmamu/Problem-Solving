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
            int idx = 0;
            for (auto it = l.begin(); it != l.end(); it++)
            {
                if (idx == v)
                {
                    l.erase(it);
                    break;
                }
                idx++;
            }
        }

        // print forward:
        cout << "L -> "; 
        for(int val : l)
        {
            cout << val << " ";
        }
        cout << endl;

        // print backward:
        cout << "R -> "; 
        for(auto it = l.rbegin(); it != l.rend(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}