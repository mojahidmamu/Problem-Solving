#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    string n;
    long long x;
    cin >> n >> x;

    long long mod = 0;
    for(char c : n)
    {
        mod = (mod * 10 + (c - '0')) % x;
    }

    if (mod == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
