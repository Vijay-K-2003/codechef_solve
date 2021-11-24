#include <bits/stdc++.h>
#define vpii vector<pair<int, int>>
#define vi vector<int>
using namespace std;

class graph
{
    private:
        int v, e;
        vector<vi> G;
    public:
        graph(int n, int ed, vpii edges)
        {
            v = n;
            e = ed;
            
        }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-- > 0)
    {
        int v, n;
        cin >> v >> n;
        vpii edges;
        for(int i = 0 ; i < n ; i++)
        {
            int a, b;
            cin >> a >> b;
            edges.push_back(make_pair(a, b));
        }
        int o, h;
        cin >> o >> h;

    }
    return 0;    
}