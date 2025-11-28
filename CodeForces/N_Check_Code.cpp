#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int A, B;
    cin >> A >> B;
    string s;
    cin >> s;
    int pos = A + 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (pos == '-')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
