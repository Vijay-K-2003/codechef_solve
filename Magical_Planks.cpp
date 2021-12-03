#include <bits/stdc++.h>
using namespace std;

void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}

void solve(){
    int n;
    string s;

    cin >> n;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < n-1; i++){
        if(s[i] != s[i+1])
            cnt++;
    }
    cout << ceil((double)cnt/2) << "\n";
}
