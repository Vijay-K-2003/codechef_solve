#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n, 0); // 0 to n-1
    int sum = 0;
    vector<int> inc;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if(a[i]>0)
        inc.push_back(i);
    }
    if (k == 0)
        cout << sum << "\n";
    else
    {

        for (int i = 0; i < k; i++)
        {
            inc.clear();
            for (int j = 0; j < n; j++)
            {
                if (a[j] > 0)
                {
                    inc.push_back(j);
                    sum += 2;
                }
            }
            for (auto it = inc.begin(); it < inc.end(); it++)
            {
                if (*it == 0)
                {
                    a[1]++;
                    a[n - 1]++;
                }
                else if (*it == n - 1)
                {
                    a[0]++;
                    a[n - 2]++;
                }
                else
                {
                    a[*it + 1]++;
                    a[*it - 1]++;
                }
            }
        }

        cout << sum << "\n";
    }
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