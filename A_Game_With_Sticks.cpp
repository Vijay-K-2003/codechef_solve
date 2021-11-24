#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    if (n > m)  swap(n, m);
    if (n%2 == 0)   cout << "Malvika" << endl;
    else            cout << "Akshat" << endl;
    return 0;
}