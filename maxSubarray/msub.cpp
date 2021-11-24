#include <bits/stdc++.h>
using namespace std;

int main()
{
    //! Algorithm
    //! start, end, diff, n
    //! for i in range (0, n-2)
    //!     for j in range (i+1, n-1)
    //!         if price[j] > price[i] && price[j]-price[i] > diff 
    //!             start = i;
    //!             end = j;
    //!             diff = price[j] - price[i]
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> prices(n, 0);
    // input prices
    for(int i = 0 ; i < n ; i++)
        cin >> prices[i];

    int start, end, diff = 0;
    int steps = 0;
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            steps++;
            if(prices[j] > prices[i] && (prices[j] - prices[i]) > diff)
            {
                start = i;
                end = j;
                diff = prices[j] - prices[i];
            }
        }
    }
    cout << "Steps Required = " << steps << endl;
    cout << "Start = " << start << "\tEnd = " << end << "\tProfit = " << diff ;
    return 0;
}