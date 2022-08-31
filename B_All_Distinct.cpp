#include <bits/stdc++.h>
using namespace std;

void _() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int cnt = 0;
    int prev = arr[0];
    for(int i = 1; i < n ; i++) {
        if (prev != arr[i]) {
            cnt++;
            prev = arr[i];
        }
    }
    cnt++;
    if ((n - cnt) % 2 == 0) {
        cout << cnt << "\n";
    } else {
        cout << cnt - 1 << "\n";
    }
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) _();
    return 0;
}
