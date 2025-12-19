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
    int vowelCount = 0;
    while (ss >> word)
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
                word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
            {
                vowelCount++;
            }
        }
    }
    cout << vowelCount << endl;

    return 0;
}
