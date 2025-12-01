#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    string F1, S1;
    cin >> F1 >> S1;
    string F2, S2;
    cin >> F2 >> S2;
    if (S1 == S2)
    {
        cout << "ARE Brothers" << endl;
    }
    else
    {
        cout << "NOT" << endl;
    }

    return 0;
}
