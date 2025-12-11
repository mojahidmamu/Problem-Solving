#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;

    int a = n / 10;
    int b = n % 10;

    if (b != 0 && a % b == 0)
    {
        cout << "YES" << "\n";
    }
    else if (a != 0 && b % a == 0)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}
