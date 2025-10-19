#include <bits/stdc++.h>
using namespace std;

// Check if any two numbers have gcd > 1
bool has_gcd_gt_one(const vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (__gcd(a[i], a[j]) > 1)
                return true;
    return false;
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
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        if (has_gcd_gt_one(a))
        {
            cout << 0 << "\n"; // already good
        }
        else
        {
            int ones = count(a.begin(), a.end(), 1);
            if (ones >= 2)
                cout << 2 << "\n"; // increase two 1s to 2
            else
                cout << 1 << "\n"; // increase one number to match another
        }
    }
    return 0;
}
