#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;

        if (n <= m)
        {
            cout << m - n << '\n';
        }
        else
            cout << (n - m) % 2 << '\n';
    }
    return 0;
}
