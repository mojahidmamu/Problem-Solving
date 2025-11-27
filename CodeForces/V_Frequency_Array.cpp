#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n, m;
    cin >> n >> m;
    vector<int> freq(m + 1, 0);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (1 <= x && x <= m)
        {
            freq[x]++;
        }
    }

    for (int i = 1; i <= m; i++)
    {
        cout << freq[i] << endl;
    }

    return 0;
}
