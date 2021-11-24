#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n, 0); // 0 to n-1
    int sum = 0;
    int cnt = 0;
    vector<int> inc;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if(a[i] > 0)
        {
            cnt++;
            inc.push_back(i);
        }
    }
    for(int i = 1 ; i < k ; i++)
    {
        for(auto it = inc.begin() ; it < inc.end() ; it++)
        {
            if(*it != 0 || *it != n-1)
            {
                if(a[*it + 1] == 0)
                cnt++;
                if(a[*it - 1] == 0)
                cnt++;
            }
            else
            {
                if(*it == 0)
                {
                    if(a[1] == 0)
                    cnt++;
                    if(a[n-1] == 0)
                    cnt++;
                }
                if(*it == n-1)
                {
                    if(a[0] == 0)
                    cnt++;
                    if(a[n-2] == 0)
                    cnt++;
                }
            }
        }
        sum += 2*cnt;
    }
    cout << sum << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t-- > 0)
        testcase();

    return 0;
}