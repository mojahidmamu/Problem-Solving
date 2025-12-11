#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int cont0 = 0, cont1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                cont0++;
            }
            else
            {
                cont1++;
            }
        }

        if (cont0 == 0)
        {
            cout << 0 << "\n";
        }
        else if (cont0 == 1 || cont1 == 0)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 2 << "\n";
        }
    }
    return 0;
}
