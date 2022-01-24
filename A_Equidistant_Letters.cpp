#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    char ar[s.size()];
    set<char> S;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        S.insert(s[i]);
        if(S.contains(s[i])) {
            cnt++;
        }
        ar[i] = s[i];
    }
    if(cnt == 1) {
        sort(s.begin(), s.end());
        cout << s << "\n";
    } else if((float)cnt == (float)s.size()/2) {
        
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}