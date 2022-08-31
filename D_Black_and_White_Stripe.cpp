#include <bits/stdc++.h>
using namespace std;

void _() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    /* Brute Force : TLE*/
    // int w[n-k+1];
    int min_w = INT_MAX;
    // for (int i = 0 ; i < n-k+1 ; i++) {
    //     w[i] = 0;
    //     for (int j = i ; j < i+k ; j++) {
    //         if (s[j] == 'W') w[i] += 1;
    //     }
    //     min_w = min(min_w, w[i]);
    // }

    // if n == k then count W in string s
    if (n == k) {
        int count = 0;
        for (int i = 0 ; i < n ; i++) {
            if (s[i] == 'W') count += 1;
        }
        cout << count << endl;
        return;
    }
    // if k == 1 then count B in string s if count > 0 then 0 else 1
    if (k == 1) {
        int count = 0;
        for (int i = 0 ; i < n ; i++) {
            if (s[i] == 'B') count += 1;
        }
        if (count > 0) cout << 0 << endl;
        else cout << 1 << endl;
        return;
    }

    vector<int> whites(n+1, 0);
    for (int i = 1 ; i <= n ; i++)
    {
        whites[i] = whites[i-1] + (s[i-1] == 'W' ? 1 : 0);
    }
    for (int i = k ; i < n ; i++) {
        min_w = min(min_w, whites[i] - whites[i-k]);
    }

    cout << min_w << endl;
}

int main()
{
    // fastio
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) _();
    return 0;
}
