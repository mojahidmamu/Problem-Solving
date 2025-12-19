#include <bits/stdc++.h>
using namespace std;
void pyramid(int n)
{
    for (int i = n; i >= 1; --i)
    {
        for (int j = 0; j < n - i; ++j)
        {
            cout << ' ';
        }
        for (int k = 0; k < 2 * i - 1; ++k)
        {
            cout << '*';
        }
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;

    pyramid(n);

    return 0;
}
