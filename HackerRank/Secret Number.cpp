#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    if (n < 0)
    {
        n = -n;
    }
    cout << abs(n) % 10 << endl;

    return 0;
}
