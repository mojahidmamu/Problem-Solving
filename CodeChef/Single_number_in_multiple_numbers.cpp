#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

int singleNumber(vector<int> &nums)
{

    int result = 0;
    for (int num : nums)
    {
        result ^= num; // XOR operation
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << singleNumber(a) << endl;
    }

    return 0;
}
