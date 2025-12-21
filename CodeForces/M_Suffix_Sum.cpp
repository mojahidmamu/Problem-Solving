#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int sum(int n, int m)
{
    if (m == 0)
        return 0;
    return n + sum(n, m - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    cout << sum(n, m) << endl;

    return 0;
}
