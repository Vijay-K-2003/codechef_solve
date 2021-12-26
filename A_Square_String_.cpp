#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    bool flag = false;
    for(int i = 1; i < n; i++) {
        if(s.substr(0, i) == s.substr(i) ){
            flag = true;
        }
    }
    if(flag) {
        cout << "YES\n";
    } else  {
        cout << "NO\n";
    }
}

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