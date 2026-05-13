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
        int n, m;
        cin >> n >> m;

        if (n == 1)
        {
            cout << -1 << endl;
        }
        else if (n == 2)
        {
            cout << "1 1" << endl;
        }
        else if (n % 2 == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> A(n);

            // pattern: 1 1 0 repeat
            for (int i = 0; i < n; i++)
            {
                if (i % 3 == 2)
                    A[i] = 0;
                else
                    A[i] = 1;
            }

            for (int i = 0; i < n; i++)
            {
                cout << A[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
