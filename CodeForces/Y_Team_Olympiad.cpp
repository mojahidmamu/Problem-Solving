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
    vector<int> programmer, math, PE;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            programmer.push_back(i + 1);
        }
        else if (t == 2)
        {
            math.push_back(i + 1);
        }
        else if (t == 3)
        {
            PE.push_back(i + 1);
        }
    }

    int w = min({programmer.size(), math.size(), PE.size()});
    cout << w << endl;

    for (int i = 0; i < w; i++)
    {
        cout << programmer[i] << " " << math[i] << " " << PE[i] << endl;
    }

    return 0;
}
