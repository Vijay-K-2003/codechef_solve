#include <bits/stdc++.h>
using namespace std;

void _() {
    int n, m;
    cin >> n >> m;
    int a[n];
    bool flag[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (m % 2 == 0) {
        vector<pair<int, int>> f;
        for (int i = 0; i < m; i++) {
            int p, q;
            flag[p - 1] = true;
            flag[q - 1] = true;
            cin >> p >> q;
            f.push_back(make_pair(p, q));
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += flag[i] ? a[i] : 0;
        }
        cout << sum << "\n";
    } else {

    }
}    


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
        _();
    return 0;
}
