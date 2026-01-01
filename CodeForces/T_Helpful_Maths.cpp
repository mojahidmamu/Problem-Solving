#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> nums;
    for (char ch : s)
    {
        if (ch != '+')
        {
            nums.push_back(ch - '0');
        }
    }

    sort(nums.begin(), nums.end());

    return 0;
}
