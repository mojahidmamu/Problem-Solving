#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---

    int x, row, col;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> x;
            if (x == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    cout << abs(row - 3) + abs(col - 3);
    return 0;
}
