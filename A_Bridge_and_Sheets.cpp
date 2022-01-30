#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l, w;
    cin >> n >> l >> w;
    vector<int> a(n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int temp = a[i];
        while (temp <= a[i] + w)
        {
            s.insert(temp);
            temp++;
        }
    }
    int cntEdge = 0;
    bool prev = false;
    for (int i = 0; i < n; i++)
    {
        if (s.find(i) != s.end())
        {
            if(prev == false and i != 0 and i != l)
            {
                cntEdge++;
            }
            prev = true;
        }
        else
        {
            prev = false;
        }
    }
    int ans = l + cntEdge - s.size();
    cout << setprecision(10) << ceil(ans / w) << "\n";

    return 0;
}