#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> freq; // or unordered_map if you prefer
    multiset<int> missing;

    int max_a = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        freq[a[i]]++;
        max_a = max(max_a, a[i]);
    }

    // Collect all missing numbers from 0 to n (inclusive is enough)
    for (int i = 0; i <= n; ++i)
    {
        if (freq[i] == 0)
        {
            missing.insert(i);
        }
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        if (freq[x] == 0)
        {
            cout << "-1\n";
            continue;
        }

        // Simulate removal
        bool will_become_missing = (freq[x] == 1);
        freq[x]--;

        if (will_become_missing)
        {
            missing.insert(x);
        }

        // Answer = smallest missing number right now
        cout << *missing.begin() << '\n';

        // Undo
        freq[x]++;
        if (will_become_missing)
        {
            missing.erase(missing.find(x));
        }
    }

    return 0;
}