#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int A;
    char s;
    int B;
    cin >> A >> s >> B;
    int result;
    if (s == '+')
    {
        result = A + B;
    }
    else if (s == '-')
    {
        result = A - B;
    }
    else if (s == '*')
    {
        result = A * B;
    }
    else if (s == '/')
    {
        result = A / B;
    }

    
    cout << result << endl;

    return 0;
}
