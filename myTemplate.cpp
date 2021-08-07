#include <bits/stdc++.h>
#define repfor(i,a,b,c) for(int i = a ; i < b ; i = i + c)
#define llint long long int
#define vecint vector<int>
#define vecllint vector<long long int>
#define pb push_back
#define setllint set<long long int>

using namespace std;

llint power(llint x, llint y)
{
    llint res = 1;
    while (y)
    {
        if (y % 2 == 1)
            res = (res * x);
        y = y >> 1;
        x = (x * x);
    }
    return res;
}

llint gcd(llint a, llint b)
{
     if (a == 0)
        return b;
    return gcd(b % a, a);
}

vecint getVector(int size)
{
    vecint arr(size);
    repfor(i,0,size,1)
    {
        int temp;
        cin >> temp;
        arr.pb(temp);
    }
    return arr;
}

void solve(/*Inputs*/)
{

}

int main()
{
    int t;
    cin >> t;
    while(t-- > 0)
    {
        // Inputs

        // Solve
        solve();
    }
    return 0;
}