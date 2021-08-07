#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()  {
    fastio
    int t;
    cin >> t;
    while(t-- > 0)  {
        long long int g, c;
        cin >> g >> c;
        cout << (c*c) / (2*g) << "\n";
    }
    return 0;
}