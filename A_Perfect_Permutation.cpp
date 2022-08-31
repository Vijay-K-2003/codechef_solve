#include <bits/stdc++.h>
using namespace std;

void _() {
    int n;
    cin >> n;
    if(n == 1) {
        cout << "1\n";
        return;
    }
    vector<long long> arr;
    for (int i = 0; i < n; i++) {
        arr.push_back(i + 1);  
    }
    if(n%2 == 0) {
        for (int i = 0; i < n; i=i+2) {
            swap(arr[i], arr[i + 1]);
        }
    } else {
        swap(arr[0],arr[n - 1]);     
        for (int i = 1; i < n; i=i+2) {
            swap(arr[i], arr[i + 1]);
        }
    }
    for (int i = 0; i < n ; i++) {
        // if(arr[i]%(i+1) == 0)
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        _();
    
    return 0;
}
