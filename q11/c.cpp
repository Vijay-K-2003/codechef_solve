#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    long long int n, s;
    cin >> n >> s;
    long long int x = n*(n+1)/2 - s;
    if(x <= n && x >= 1)
    cout << x << "\n";
    else 
    cout << "-1\n"; 
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t-- > 0)
    testcase();
    return 0;
}