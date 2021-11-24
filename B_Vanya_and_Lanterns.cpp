#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n, l;
    cin >> n >> l;
    vector<double> a(n, 0);
    for (int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double maxDist = 0;
    for(int i = 1 ; i < n ; i++)
    {
        if(a[i] - a[i-1] > maxDist)
        maxDist = a[i] - a[i-1];
    }
    double res = max(maxDist/2, max(a[0]-0, l-a[n-1]));
    cout << std::fixed << setprecision(10) << res << "\n";
    return 0;
}