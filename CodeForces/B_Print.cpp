#include <bits/stdc++.h>
using namespace std;

void sum(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i;
        if (i < n)
        {
            cout << " ";
        }
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    sum(n);
    return 0;
}
