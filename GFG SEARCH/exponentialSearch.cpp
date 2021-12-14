#include <bits/stdc++.h>
using namespace std;
// ! time equivalent to O(log n)

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
    }
    return -1;
}

int exponentialSearch(int arr[], int n, int target) {
    int lo = 0, hi = n-1;
    if(target == arr[lo])
        return lo;
    else if(target == arr[hi])
        return hi;
    else if(target < arr[lo] || target > arr[hi]) {
        return -1;
    }

    int i = 1;
    while (i < n && arr[i] <= target)
        i = i*2;
    
    // recursive binary search
    return binarySearch(arr, i/2, min(i, n-1), target);
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
    
    int ans = exponentialSearch(arr, n, target);
    cout << ans << endl;

    return 0;
}