#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int sequence(int n)
{
    if (n == 1)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return 1 + sequence(n / 2);
    }
    else
    {
        return 1 + sequence(3 * n + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << sequence(n) << endl;

    return 0;
}
