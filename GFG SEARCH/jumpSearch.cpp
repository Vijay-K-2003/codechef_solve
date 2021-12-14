#include <bits/stdc++.h>
using namespace std;
// ! time complexity of O(sqrt(n))
int jumpSearch(int arr[], int n, int target) {

    int steps = sqrt(n);
    int start, end;
    int ans = -1;
    for(int i = 0 ; i < n/steps ; i++) {
        if(arr[i*steps] <= target and arr[i*(steps+1)] >= target)
        {
            start = i*steps;
            end = i*(steps + 1);
        }
    }
    cout << start << " " << end << " " << steps << endl; 
    for(int i = start ; i <= end ; i++) {
        if(arr[i] == target) {
            ans = i;
        }
    }
    return ans;
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
    
    int ans = jumpSearch(arr, n, target);
    cout << ans << endl;

    return 0;
}