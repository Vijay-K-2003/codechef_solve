#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b ;
    int m = min(a,b);
    a -= m ;
    b -= m;
    if(a == 0) cout << m << " " << b/2 << "\n";
    else       cout << m << " " << a/2 << "\n";
    return 0;
}