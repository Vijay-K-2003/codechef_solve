#include <bits/stdc++.h>
#define vi vector<int> 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vi a(n, 0);
        int max = INT_MIN;
        int min = INT_MAX;
        for (int i = 0 ; i < n ; i++){
            cin >> a[i];
            if(max < a[i]) max = a[i];
            if(min > a[i]) min = a[i];
        }

        cout << max - min << "\n";

    }

    return 0;
}