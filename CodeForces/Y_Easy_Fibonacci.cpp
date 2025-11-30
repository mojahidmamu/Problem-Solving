#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;

    int a = 0, b = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << a << " ";
        }
        else if (i == 2)
        {
            cout << b << " ";
        }
        else
        {
            int c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }

    return 0;
}
