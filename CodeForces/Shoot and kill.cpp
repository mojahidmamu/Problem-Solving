#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

struct SegmentTree
{
    int n;
    vector<int> tree;

    SegmentTree(vector<int> &a)
    {
        n = a.size();
        tree.resize(4 * n);
        build(1, 1, n, a);
    }

    void build(int node, int l, int r, vector<int> &a)
    {
        if (l == r)
        {
            tree[node] = a[l];
            return;
        }
        int mid = (l + r) / 2;
        build(node * 2, l, mid, a);
        build(node * 2 + 1, mid + 1, r, a);
        tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
    }

    int query(int node, int l, int r, int ql, int qr)
    {
        if (r < ql || l > qr)
            return 0;
        if (ql <= l && r <= qr)
            return tree[node];
        int mid = (l + r) / 2;
        return max(
            query(node * 2, l, mid, ql, qr),
            query(node * 2 + 1, mid + 1, r, ql, qr));
    }
};

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
        st.insert(range[i].second + 1);
    }

    int q;
    cin >> q;
    vector<pair<long long, long long>> queries(q);
    for (int i = 0; i < q; i++)
    {
        cin >> queries[i].first >> queries[i].second;
        st.insert(queries[i].first);
        st.insert(queries[i].second);
    }

    map<long long, int> compress;
    int cur = 1;
    for (auto &x : st)
    {
        compress[x] = cur++;
    }

    return 0;
}
