#include <bits/stdc++.h>
using namespace std;

// Array Increments
void _() {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    int sum_B = 0;
    for (int i = 0 ; i < n ; i++) {
        cin >> b[i];
        sum_B += b[i];
    }

    // if sum_B == 0 then YES
    if (sum_B == 0) {
        cout << "YES" << endl;
        return;
    }

    // check if all a[i] >= b[i]
    for (int i = 0 ; i < n ; i++) {
        if (a[i] < b[i]) {
            cout << "NO" << endl;
            return;
        }
    }

    // if n is 1 then YES
    if (n == 1) {
        cout << "YES" << endl;
        return;
    }

    int diff[n];
    for (int i = 0 ; i < n ; i++) {
        diff[i] = a[i] - b[i];
    }

    // get the value of a[i] - b[i] for first non zero b[i]
    int first_non_zero_b = -1;
    for (int i = 0 ; i < n ; i++) {
        if (b[i] != 0) {
            first_non_zero_b = a[i] - b[i];
            break;
        }
    }
    
    for (int i = 0 ; i < n ; i++) {
        if (b[i] == 0) {
            if (first_non_zero_b < diff[i]) {
                cout << "NO" << endl;
                return;
            }
        } else {
            if (first_non_zero_b != diff[i]) {
                cout << "NO" << endl;
                return;
            } 
        }
    }
    cout << "YES" << endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        _();
    }
    return 0;
}
