#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        cout << std::fixed << setprecision(0) << floor((n-1)/2) << "\n";
    }

    return 0;
}