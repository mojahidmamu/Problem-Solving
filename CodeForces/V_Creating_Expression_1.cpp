#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int n;
long long x;
vector<long long> arr(25);

bool expression(int index, long long cur_sum)
{

    if (index == n)
    {
        return cur_sum == x;
    }

    return expression(index + 1, cur_sum + arr[index]) || expression(index + 1, cur_sum - arr[index]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << expression(0, 0) ? "YES\n" : "NO\n";

    return 0;
}
