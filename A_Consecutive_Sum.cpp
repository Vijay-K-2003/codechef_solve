// #include <bits/stdc++.h>
// using namespace std;

// long long maxSubArray(vector<int>& arr, int k) {
//     int i = 0, j;
//     int n = arr.size();
//     long long sum = 0, maxm = -99999;
//     for (j = 0; j < n; j++)
//     {
//         if ((j - i + 1) < k)
//             sum += arr[j];
//         else if ((j - i + 1) == k)
//         {
//             sum += arr[j];
//             maxm = max(sum, maxm);
//             sum = sum - arr[i];
//             i++;
//         }
//     }
//      return maxm;
//     }

// void printArr(vector<int> & v) {
//     cout << "Vector\n";
//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << "\n";
// }
// void solve() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     if(n==k) {
//         long long ans = maxSubArray(a, k);
//         // cout << ans << " : \n";
//         cout << ans << "\n";
//         return;
//     }

//     for (int i = 0; i < n; i++) {
//         int x = 2;
//         for (int j = i*x; j < n; j++) {
//             if ((i+1)%k == (j+1)%k and a[j] > a[i]) {
//                 swap(a[j], a[i]);
//             }
//             x++;
//         }
//     }
//     // printArr(a);
//     long long sum = 0;
//     for (int i = 0; i < k; i++) {
//         sum += a[i];
//     }
//     cout << sum << "\n";
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--) {
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
long long k, n, s, t, x, a[100005];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(cin >> t; t--;)
	{
		cin >> n >> k;
		for(int i = 1; i <= n; i++)
		{
			cin >> x;
			a[i % k] = max(a[i % k], x);
		}
		s = 0;
		for(int i = 0; i < k; i++)s += a[i];
		cout << s << endl;
		fill(a, a + k, 0);
	}
}
