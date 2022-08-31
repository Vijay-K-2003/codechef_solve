#include <bits/stdc++.h>
using namespace std;

vector<bool> is_prime(1e4 + 1);
vector<int> vals(1e6 + 1, -1);

// sieve of eratosthenes for checking primes
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= 1e4; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= 1e4; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    //fastio
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        // find and count prime factors
        int val = abs(b - a);
        if (val < 1e4 and is_prime[val]) {
            cout << "2\n";
            continue;
        }
        if (val <= 1e6 and vals[val] != -1) {
            cout << vals[val] << "\n";
            continue;
        }
        // int ans = 1;
        // int cnt = 0;
        // int factor = 2;
        // if factorisation is x = p^a q^b r^c then ans = (a+1)(b+1)(c+1)
        // while (val > 1) {
        //     if (val % factor == 0) {
        //         val /= factor;
        //         cnt++;
        //     } else {
        //         ans *= (cnt + 1);
        //         factor++;
        //         cnt = 0;
        //     }
        // }
        // ans *= (cnt + 1);
        // cout << ans << "\n";
        // if (val <= 1e6 and vals[val] == -1) {
        //     vals[val] = ans; 
        // }
        double lim = sqrt(val);
        int ans = 0;
        for (int i = 1 ; i <= lim ; i++) {
            if (val % i == 0) {
                if (val / i == i) {
                    ans++;
                } else {
                    ans += 2;
                }
            }
        }
        cout << ans << "\n";
        if (val <= 1e6) {
            vals[val] = ans;
        }
    }
    return 0;
}
