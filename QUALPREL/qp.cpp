#include <bits/stdc++.h>
using namespace std;
void testcase(){
    int n, k;
    cin >> n >> k;
    vector<int> s(n,0);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> s[i];
    }
    sort(s.begin(),s.end());
    reverse(s.begin(), s.end());
    int win = s[k-1];
    int cnt = 0;
    for(auto it = s.begin(); it < s.end() ; it++)
        if(*it >= win)
            cnt++;
    
    cout << cnt << "\n";
}
int main()
{
    int t;
    cin >> t;
    while(t-- > 0)
    {
        testcase();
    }
}