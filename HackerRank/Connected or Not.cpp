#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int N, E;
    cin >> N >> E;
    while (E--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int A, B;
        cin >> A >> B;

        if (A == B)
        {
            cout << "YES" << endl;
            continue;
        }

        bool isConnected = false;
        for(int val : adj_list[A])
        {
            isConnected = true;
            break;
        }

        if (isConnected)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
        
        
    }

    return 0;
}
