
#include <bits/stdc++.h>
using namespace std;

void _() {
    int n; cin >> n;
    int a[n]; 
    int cnt = 0;
    vector<int> zeros;
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            zeros.push_back(i);
        }
    }
    if (zeros[0] > 0 ) cnt++;
    if (zeros[zeros.size() - 1] < n) cnt++;
    if (zeros.size() == 1 || zeros.size() == 0) {
        cnt = 1;
    }
    if (n == zeros.size()) {
        cnt = 0;
    }
    if (n == 1 and zeros.size() == 0) {
        cnt = 1;
    }
    for (int i = 1; i < zeros.size(); i++) {
        if (zeros[i] - zeros[i - 1] > 1) { 
            cnt++;
        }
    }
    cout << n << " " << cnt-1 << endl;
}

int main()
{
    // fastio
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) _();
    return 0;
}
