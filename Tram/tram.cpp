#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a, b;
    int maximum = 0;
    int inside = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a >> b;
        inside = inside + b - a;
        maximum = max(maximum, inside);
    }
    cout << maximum;
    return 0;
}