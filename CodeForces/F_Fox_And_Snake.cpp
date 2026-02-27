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

    int n, m;
    cin >> n >> m;
    while (n--)
    {
        for (int i = 0; i < m; i++)
        {
            if (n % 2 == 0)
            {
                cout << "#";
            }
            else
            {
                if (i == 0 || i == m - 1)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
    

    return 0;
}
