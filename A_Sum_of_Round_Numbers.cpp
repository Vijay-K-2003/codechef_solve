#include <bits/stdc++.h>
using namespace std;

void solve();
int getMinCnt();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}

int getMinCnt(int n) {
    int cnt = 0;
    while(n > 0) {
        int temp = n%10;
        if(temp != 0) cnt++;
        n = n/10;
    }
    return cnt;
}

void printVals(int n) {
    int cnt = 0;
    while(n > 0) {
        int temp = n%10;
        if(temp != 0 )
        cout << temp * pow(10, cnt) << " ";
        cnt++;
        n = n/10;
    }
    cout << "\n";
}

void solve() {
    int n;
    cin >> n;
    cout << getMinCnt(n) << "\n";
    printVals(n);
}