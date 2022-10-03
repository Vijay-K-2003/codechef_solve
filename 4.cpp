#include <bits/stdc++.h>
using namespace std;

int reverse(int n) {
    int remainder, rev = 0;
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> revv(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        revv[i] = reverse(v[i]);
    }
    // for (int i = 0; i < n; i++) {
    //     cout << v[i] << " " << revv[i];
    // }
    cout << '\n';
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((v[i] + revv[j]) == (v[j] + revv[i])) {
                cnt++;
            }

        }
    }
    cout << cnt << endl;
    return 0;
}
