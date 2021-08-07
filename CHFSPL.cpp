#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t-- > 0)  
    {
        long long int a, b , c;
        cin >> a >> b >> c;
        long long int mini = min(min(a,b),c);
        long long int total = a+b+c - mini;
        cout << total << "\n";
    }
    return 0;
}