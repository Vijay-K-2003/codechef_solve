#include <bits/stdc++.h>
using namespace std;

void _() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    int restored[n];
    int l = 0, r = n-1;
    for (int i = 0 ; i < n ; i++) {
        if (i%2 == 0) {
            restored[i] = arr[l];
            l++;
        } else {
            restored[i] = arr[r];
            r--;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << restored[i] << " ";
    }
    cout << "\n";
    return;
}

int main() {
    // fastio
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        _();
    }

    return 0;
}
