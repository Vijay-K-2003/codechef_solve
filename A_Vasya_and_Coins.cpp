#include <bits/stdc++.h>
using namespace std;

void _() 
{
    long long int a, b;
    cin >> a >> b;
    if (a == 0 and b == 0) cout << 1 << "\n";
    else if (a != 0 and b == 0) cout << a+1 << "\n";
    else if (a == 0 and b != 0) cout << 1 << "\n";
    else cout << a + 2*b + 1 << "\n";
}

int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        _();
    }
    return 0;
}
