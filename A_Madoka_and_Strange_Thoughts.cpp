#include <bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 1; i <= n ; i++) {
            for (int j = i; j <= n; j++) {
                if (pow(lcm(i,j), 2) <= (3*i*j)) {
                    if(i != j) {
                        cnt += 2;
                    } else {
                        cnt += 1;
                    }
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
