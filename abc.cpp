#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, sum, r;
    cin >> t;
    while(t--) {
        cin >> n;
        sum = 0; // this should be inside the loop
        while(n != 0) {
            r = n % 10;
            sum += r;
            n = n / 10;
        }
        cout << "Sum is : " << sum << endl;
    }
    return 0;
}