#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        double n;
    cin >> n;
    int avg = ceil( n / 3 );
    int top = avg + 1;
    int bottom = n - avg - top;
    if (bottom == 0) {
        avg = avg - 1;
        bottom = bottom + 1;
    }
    cout << avg << " " << top << " " << bottom << endl;
    
    }
    return 0;
}
