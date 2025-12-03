#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    long long count = 0;
    bool inWord = false;
    for (char c : s)
    {
        if (isalpha(c))
        {
            inWord = true;
        }
        else
        {
            if (inWord)
            {
                count++;
                inWord = false;
            }
        }
    }

    if (inWord)
    {
        count++;
    }

    cout << count << endl;

    return 0;
}
