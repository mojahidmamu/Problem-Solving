#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    string s;
    cin >> s;
    // Print maximum number of balanced strings then the balanced strings in any order.
    vector<string> balanced_strings;
    int count0 = 0, count1 = 0;
    string current;
    for (char c : s)
    {
        current.push_back(c);
        if (c == 'L')
            count0++;
        else
            count1++;
        if (count0 == count1)
        {
            balanced_strings.push_back(current);
            current.clear();
            count0 = 0;
            count1 = 0;
        }
    }
    cout << balanced_strings.size() << "\n";
    for (const string &str : balanced_strings)
    {
        cout << str << "\n";
    }
    // --- your code here ---
    return 0;
}
