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

        vector<int> oddA, evenA, oddB, evenB;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i % 2 == 0)
                oddA.push_back(x);
            else
                evenA.push_back(x);
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i % 2 == 0)
                oddB.push_back(x);
            else
                evenB.push_back(x);
        }

        sort(oddA.begin(), oddA.end());
        sort(oddB.begin(), oddB.end());
        sort(evenA.begin(), evenA.end());
        sort(evenB.begin(), evenB.end());

        if (oddA == oddB && evenA == evenB)
            cout << "YES\n";
        else
            cout << "NO\n";
    
}

return 0;
}
