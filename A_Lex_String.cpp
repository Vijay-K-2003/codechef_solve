#include <bits/stdc++.h>
using namespace std;

void _() { 
    int n, m, k;    cin >> n >> m >> k;
    string a, b, c;
    cin >> a;
    cin >> b;
    c = "";
    sort (a.begin(), a.end());
    sort (b.begin(), b.end());

    int start_a = 0, start_b = 0, done = 0;
    for (int i = 0 ; i < n+m ; i++)
    {
        if (a[start_a] <= b[start_b] and done <= k) {
            c = c + a[start_a];
            start_a++;
            done++;
        }   
        else {
            c = c + b[start_b];
            start_b++;
            done++;
        } 

        if ()

    }
    
}

int main() {
    //fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while (t--) _();
    return 0;
}
