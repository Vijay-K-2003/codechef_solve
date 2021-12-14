#include <bits/stdc++.h>
using namespace std;
// ! time equivalent to binary search O(log(n))
int interpolationSearch(int arr[], int n, int target) {
    int lo = 0, hi = n-1;
    if(target == arr[lo])
        return lo;
    else if(target == arr[hi])
        return hi;
    else if(target < arr[lo] || target > arr[hi]) {
        return -1;
    }
    else {
        while(lo <= hi && target >= arr[lo] && target <= arr[hi]) {
            int pos = lo + ((target - arr[lo])*(hi-lo) / (arr[hi] - arr[lo]));
            if(arr[pos] == target) {
                return pos; //returns ans
            }
            else if(arr[pos] < target) {
                lo = pos + 1; //left subarray
            }
            else if(arr[pos] > target) {
                hi = pos - 1; //right subarray
            }
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
    
    int ans = interpolationSearch(arr, n, target);
    cout << ans << endl;

    return 0;
}