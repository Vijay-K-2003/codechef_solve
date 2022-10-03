#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    vector<long> arr(n);
    for (int i = 0; i < n ; i ++) {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    sort(arr.begin(), arr.end());
    int cnt = 0;
    long p = arr[n - m];
    // cout << arr[n - m - 1] << "\n";
    if (n-m != 0 and p == arr[n-m-1]) {
        cout << -1 << endl; //ouptut return
    }
    else {
        cout << p << endl; //ouptut return
    }
    // for (int i = n - 1; i >= n-1-m; i--) {
    //     if(arr[i])
    // }
    return 0;
}
