#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    while (true)
    {
        int n, m;
        cin >> n >> m;
        int sum = 0;
        for (int i = n; i <= m; i++)
        {
            sum += i;
            cout << i << " ";
        }
        cout << "sum +" << sum << endl;
    }

    return 0;
}
