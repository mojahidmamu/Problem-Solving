#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    string s;
    cin >> s;
    // Print number of times that "EGYPT" word can be formed from S's characters.
    string target = "EGYPT";
    map<char, int> char_count;
    for (char c : s)
    {
        c = toupper(c);
        char_count[c]++;
    }
    int min_count = INT_MAX;
    for (char c : target)
    {
        if (char_count.find(c) == char_count.end())
        {
            min_count = 0;
            break;
        }
        min_count = min(min_count, char_count[c]);
    }
    cout << min_count << "\n";
    // --- your code here ---
    return 0;
}
