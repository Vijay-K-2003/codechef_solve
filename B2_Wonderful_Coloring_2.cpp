#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 200013;
int ans[MAX_N];
map<int, vector<int>> indices;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		indices.clear();                            // clearing all indices from previous input
		memset(ans, 0, n * sizeof(ans[0]));         // creating ans array with all 0's
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			if (indices[x].size() < k)
				indices[x].push_back(i);
		}
		int m = 0;
		for (auto e : indices) m += e.second.size();
		// sum of all lengths is m
        m -= m % k;
		int color = 0;
        int flag = 0;
		for (auto e : indices)
        {
            for (auto i : e.second)
			{
				ans[i] = ++color;
				color %= k;
				if (--m == 0)
                {
                    flag = 1;
                    break;
                }
			}
            if(flag == 1)
                break;
        }
		for (int i = 0; i < n; i++)
			cout << ans[i] << ' ';
		cout << '\n';
	}

	return 0;
}