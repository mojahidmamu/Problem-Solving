#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    bool almostLucky = true;
    for (int i = 0; i < n; i++)
    {
        while (i > 0)
        {
            int d = i % 10;
            if (d != 4 && d != 7)
            {
                almostLucky = false;
            }
        }
    }

    if (almostLucky)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
