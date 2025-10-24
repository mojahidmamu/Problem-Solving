#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    else
    {
        a.first < b.first;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int N;
    cin >> N;
    vector<pair<string, int>> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end(), compare);

    for (auto &p : arr)
    {
        cout << p.first << " " << p.second;
    }
    cout << endl;

    return 0;
}
