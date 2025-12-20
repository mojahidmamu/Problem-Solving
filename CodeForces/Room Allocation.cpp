#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    vector<pair<int, int>> range(n);
    for (int i = 0; i < n; i++)
    {
        cin >> range[i].first >> range[i].second;
    }

    vector<array<int, 3>> points;
    for (int i = 0; i < n; i++)
    {
        points.push_back({range[i].first, 1, i});      // start point
        points.push_back({range[i].second + 1, 0, i}); // end point
    }
    sort(points.begin(), points.end());

    set<int> s;
    for (int i = 1; i <= n; i++)
    {
        s.insert(i);
    }

    vector<int> ans(n);
    for (auto &p : points)
    {
        int time = p[0];
        int type = p[1];
        int idx = p[2];
        if (type == 1)
        {
            ans[idx] = *s.begin();
            s.erase(s.begin());
        }
        else
        {
            s.insert(ans[idx]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";

    return 0;
}
