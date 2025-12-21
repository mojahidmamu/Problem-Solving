#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

struct HorizontalLine
{
    int y, x1, x2;
};
struct VerticalLine
{
    int x, y1, y2;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<HorizontalLine> hLines;
    vector<VerticalLine> vLines;
    for (int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (y1 == y2)
        {
            hLines.push_back({y1, min(x1, x2), max(x1, x2)});
        }
        else if (x1 == x2)
        {
            vLines.push_back({x1, min(y1, y2), max(y1, y2)});
        }
    }

    int intersections = 0;
    for(auto &h : hLines)
    {
        for(auto &v : vLines)
        {
            if(v.x >= h.x1 && v.x <= h.x2 && h.y >= v.y1 && h.y <= v.y2)
            {
                intersections++;
            }
        }
    }

    cout << intersections << endl;

    return 0;
}
