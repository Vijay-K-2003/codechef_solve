#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    
    cin >> n;

    long long lo = -2147483648;
    long long hi = 2147483647;
    if (n <= hi and n >= lo)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}