#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int n;
long long x;
long long arr[25];

bool expression(int index, long long cur_sum)
{

    if (index == x)
    {
        return cur_sum == x;
    }

    if (expression(index + 1, cur_sum + arr[index]))
    {
        return true;
    }

    if (expression(index + 1, cur_sum - arr[index]))
    {
        return true;
    }

    return false;
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
    if (expression(0, 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
