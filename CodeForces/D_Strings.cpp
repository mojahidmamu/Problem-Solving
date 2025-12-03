#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    string s, t;
    cin >> s >> t;
    cout << s.size() << " " << t.size() << endl;
    cout << s + t << endl;

   swap(s[0], t[0]);
    //  s[0] = t[0];
   
    cout << s << " " << t << endl;
    
    return 0;
}
