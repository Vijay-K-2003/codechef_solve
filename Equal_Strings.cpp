#include <bits/stdc++.h>
using namespace std;

void _() {
    int n; cin >> n;
    string a, b;
    cin >> a;
    cin >> b;
    bool charset[26] = {false};
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            charset[b[i] - 'a'] = true;
        }
    }
    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (charset[i]) {
            count++;
        }
    }
    cout << count << endl;
}

int main() {
    // fastio
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) _();
    return 0;
}
