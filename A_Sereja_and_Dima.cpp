#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++) cin >> arr[i];

    int l = 0, r = n-1;
    int chance = 0;
    int cnt_a = 0, cnt_b = 0;
    while( l <= r ) {
        if (chance % 2 == 0) {
            if (arr[l] > arr[r]) {
                cnt_a += arr[l]; 
                l++;
            }
            else {
                cnt_a += arr[r];
                r--;
            } 
        } else {
            if (arr[l] > arr[r]) {
                cnt_b += arr[l]; 
                l++;
            }
            else {
                cnt_b += arr[r];
                r--;
            } 
        }
        chance++;
    }
    cout << cnt_a << " " << cnt_b << endl;
    return 0; 
}
