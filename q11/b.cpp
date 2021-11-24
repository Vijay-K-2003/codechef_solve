#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    int n, s;
    cin >> n >> s;
    if(n == s)
    cout << n << "\n";
    else{
        if(n > s)
        cout << s << "\n";
        else if(s > n)
        cout << 2*n - s << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while(t-- > 0)
    testcase();
    return 0;
}