#include <bits/stdc++.h>
using namespace std;

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int max_so_far = a[0];
        int operations = 0;

        for (int i = 1; i < n; i++)
        {
            if (a[i] < max_so_far)
            {
                operations++;
            }
            else
            {
                
                max_so_far = a[i];
            }
        }

        cout << operations << "\n";
    }

    return 0;
}
