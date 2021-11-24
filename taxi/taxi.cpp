#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> s(n,0);
    for(int i = 0 ; i < n ; i++)
    {
        int temp ;
        cin >> temp;
        s[temp - 1] += 1;
    }
    int ans = 0;
    
    ans += s[3];
    s[3] = 0;
    int pair = min(s[0], s[2]);
    ans += pair;
    s[2] -= pair;
    s[0] -= pair;
    int alpha = floor((double) s[1] / 2);
    ans += alpha;
    s[1] = s[1] - alpha;
    int beta = floor((double) s[0] / 4);
    ans += beta;
    s[0] = s[0] - beta;

    ans += s[2];
    s[2] = 0;
    pair = min(s[0], s[1]);
    ans += pair;
    s[0] = s[0] - pair;
    s[1] = s[1] - pair;
    alpha = floor((double) s[0] / 3);
    ans += alpha;
    s[0] -= alpha;

    ans += s[1];
    s[1] = 0;
    alpha = floor((double) s[0] / 2);
    ans += alpha;
    s[0] -= alpha;

    ans += s[0];
    s[0] = 0;

    cout << ans ;
    return 0;
}