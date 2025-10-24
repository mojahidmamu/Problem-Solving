#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> count; 

        string maxWord;
        int maxCount = 0;
        while (ss >> word)
        {
            count[word]++;
            if (count[word] > maxCount)
            {
                maxCount = count[word];
                maxWord = word;
            }
        }
        cout << maxWord << " " << maxCount << endl;
    }

    return 0;
}
