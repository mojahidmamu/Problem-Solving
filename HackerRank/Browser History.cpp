#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    list<string> web_list;
    string web_address;
    while (cin >> web_address && web_address != "end")
    {
        web_list.push_back(web_address);
    }

    auto current = web_list.begin();

    int q;
    cin >> q;
    while (q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string web_name;
            cin >> web_name;
            auto isFound = find(web_list.begin(), web_list.end(), web_name);
            
        }
        else if (command == "next")
        {
            /* code */
        }
        else if (command == "prev")
        {
            /* code */
        }
        
    }
    
    
    return 0;
}
