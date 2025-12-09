#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << val << " ";
            val = val * (i - j) / (j + 1);
        }
        cout << "\n";
    }

    return 0;
}
