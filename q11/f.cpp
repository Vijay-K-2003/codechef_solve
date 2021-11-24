#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t-- > 0)
    {
        long long int max = -1;
        int n;
        cin >> n;
        vector<int> a(n-1, 0);
        for(int i = 0 ; i < n-1 ; i++)
        {
            int temp;
            cin >> temp;
            a[i] = temp;
            if(temp > max)
            max = temp;  
        }
        int cntmax = 0;
        for(int i = 0 ; i < n-1 ; i++)
        {   
            if(a[i] == max)
            cntmax++;
        }
        cout << ((200000 - 2*max + 1)*cntmax)%1000000007 << "\n";
    }

    return 0;
}