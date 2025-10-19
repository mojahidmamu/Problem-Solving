#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;

        int ans = 0;
        int last = -k;  

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                if(i - last >= k){
                    ans++;           
                    last = i;     
                }
                else{
                    last = i;   
                }
            }
        }

        cout << ans << endl;
    }
}
