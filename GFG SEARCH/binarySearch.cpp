#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int l = 0, r = n-1;
    while(l <= r) {
        int m = l + (r-l)/2;
        if(arr[m] == target)
            return m;
        else if(arr[m] < target) {
            l = m+1;
        } else {
            r = m-1;
        }
    } 
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >>  arr[i];
    }

    int target;
    cin >> target;
    
    int ans = binarySearch(arr, n, target);
    cout << ans << endl;

    return 0;
}