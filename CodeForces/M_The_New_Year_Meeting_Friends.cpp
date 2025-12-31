#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    vector<int> pos = {x1, x2, x3};
    sort(pos.begin(), pos.end());

    int min_total_distance = pos[2] - pos[0];
    cout << min_total_distance << endl;

    return 0;
}
