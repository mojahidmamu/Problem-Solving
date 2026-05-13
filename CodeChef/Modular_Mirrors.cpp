#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

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

            int x = (m - 3 + m) % m;
            int y = (m - 4 + m) % m;

            for (int i = 0; i < n; i++)
            {
                if (i % 5 == 0 || i % 5 == 1)
                    A[i] = x;
                else if (i % 5 == 2)
                    A[i] = 0;
                else
                    A[i] = y;
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