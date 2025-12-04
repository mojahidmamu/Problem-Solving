#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    string s;
    cin >> s; 
    // Print the smallest string that can be obtained.
    sort(s.begin(), s.end());
    cout << s << "\n";
    return 0;
}
