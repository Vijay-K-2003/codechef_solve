// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, x, y;
//         cin >> n >> x >> y;
//         if (x == y) {
//             cout << -1 << "\n";
//             continue;
//         }
//         if (min(x, y) != 0) {
//             cout << "-1\n";
//             continue;
//         }
//         if(n == 2) {
//             cout << n << "\n";
//             continue;
//         }
//         vector<int> sol;
//         for (int i = 0; i < max(x, y); i++) {
//             sol.push_back(1);
//         }
//         for (int i = 0; i < max(x, y); i++) {
//             sol.push_back(2+max(x, y));
//         }
//         // cout << sol.size() << " : \n";
//         if(sol.size() >= n or sol.size() < n-1) {
//             cout << "-1\n";
//             continue;
//         }

//         for (auto a : sol) {
//             cout << a << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int k, n, t, x, y;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(cin >> t; t--;)
	{
		cin >> n >> x >> y;
		if(x > y)swap(x, y);
		if(x || !y || (n - 1) % y)
		{
			cout << -1 << endl;
			continue;
		}
		for(int k = 2; k <= n; k += y)
		{
			for(int i = 1; i <= y; i++)cout << k << ' ';
		}
		cout << endl;
	}
}
