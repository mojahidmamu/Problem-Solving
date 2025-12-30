#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

struct FenwickTree
{
    vector<int> mojo_arr;
    int n;

    FenwickTree(int size)
    {
        n = size;
        mojo_arr.assign(n + 1, 0);
    }

    void update(int index, int val)
    {
        for (++index; index <= n; index += index & -index)
            mojo_arr[index] += val;
    }

    int query(int index)
    {
        int sum = 0;
        for (++index; index > 0; index -= index & -index)
        {
            sum += mojo_arr[index];
        }
        return sum;
    }
};

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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> sorted_arr = arr;
        sort(sorted_arr.begin(), sorted_arr.end());
        map<int, int> mp;
        int idx = 0;
        for (int x : sorted_arr)
        {
            if (!mp.count(x))
                mp[x] = idx++;
        }

        FenwickTree ft(idx);
        ll count = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            int comp_val = mp[arr[i]];
            count += ft.query(comp_val);
            ft.update(comp_val, 1);
        }

        cout << count << endl;
    }

    return 0;
}
