#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<long long, long long>> range(n);
    set<long long> st;
    for (int i = 0; i < n; i++)
    {
        cin >> range[i].first >> range[i].second;
        st.insert(range[i].first);
        st.insert(range[i].second);
    }

    int q;
    cin >> q;
    vector<long long> queries(q);
    for (int i = 0; i < q; i++)
    {
        cin >> queries[i];
        st.insert(queries[i]);
    }

    map<long long, int> compress;
    int cur = 1;
    for (auto &x : st)
    {
        compress[x] = cur++;
    }
    
    return 0;
}
