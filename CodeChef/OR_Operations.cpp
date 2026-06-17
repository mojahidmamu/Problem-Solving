#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int G = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            G |= a[i];
        }

        int segments = 0;
        int cur = 0;

        for (int i = 0; i < n; i++)
        {
            cur |= a[i];

            if (cur == G)
            {
                segments++;
                cur = 0;
            }
        }

        cout << n - segments << endl;
    }

    return 0;
}
