#include <bits/stdc++.h>
using namespace std;

void _() {
    // given arrival time and finish time of n tasks find the burst time of each task
    int n;
    cin >> n;
    int a[n]; // arrival time => s
    int f[n]; // finish time => f
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    for (int i = 0 ; i < n ; i++) {
        cin >> f[i];
    }
    int bt[n];
    bt[0] = f[0] - a[0];
    // if bt[i+1] > bt[i] then bt[i+1] = f[i+1] - a[i+1]
    for (int i = 0 ; i < n ; i++) {
        if (a[i+1] > f[i]) {
            bt[i+1] = f[i+1] - a[i+1];
        } else {
            // find waiting time of the next task
            int wt = f[i] - a[i+1];
            bt[i+1] = f[i+1] - a[i+1] - wt;
        }
    }
    // print bt
    for (int i = 0 ; i < n ; i++) {
        cout << bt[i] << " ";
    }
    cout << endl;

}

int main()
{
    // fastio
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        _();
    }
    

    return 0;
}
