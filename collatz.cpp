#include <bits/stdc++.h>
#define rep(i,a,b,c) for(int i = a; i < b ; i = i + c)
#define llint long long int 

using namespace std;

int main()
{
    llint n ;
    cin >> n;
    vector<llint> a;
    a.push_back(n);
    vector<int> b;
    llint peak = INT_MIN;
    while(n!=1)
    {
        if(n > peak)
            peak = n;
        if(n%2 == 0)
            n = n/2;
        else
            n = 3*n + 1;
        a.push_back(n);
        // cout << n << "\n";
    }

    rep(i,0,a.size(),1)
    {
        cout << a[i] << "\n";
    }
    cout << "Peak : " << peak << "\n";
    return 0;
}