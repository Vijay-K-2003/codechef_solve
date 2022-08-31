#include <bits/stdc++.h>
using namespace std;

void _() {
    int n;  cin >> n;
    if (n == 1) {
        cout << "1\n";
        return;
    } else if (n == 2) {
        cout << "1 2\n";
        return;
    }

    int arr[n] = {-1};
    arr[n-1] = n;
    arr[n-2] = 1;
    bool used[n+1] = {false};
    used[n] = true; 
    for (int i = n-1 ; i > 0 ; i--) {
        // starting from last build array
        for (int j = 1 ; j <= n ; j++) {
            if (!used[j] and abs(arr[i] - j) % i == 0) {
                arr[i-1] = j;
                used[j] = true;
                break;
            }
        }
    }
    for (int i = 0 ; i < n ; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    // fastio
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while (t--) _();

    return 0;
}
