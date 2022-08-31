#include <bits/stdc++.h>
using namespace std;

long long int count(int S[], int m, int n) {

        // code here.
        // coins => S
        long long int mat[m][n+1]; // m denominations n value 
        for(int i = 0 ; i < m; i++) {
            mat[i][0] = 1;
        }
        for(int j = 0 ; j < n+1 ; j++) {
            mat[0][j] = (j % S[0] == 0) ? 1 : 0;
        }
        for(int i = 1 ; i < m ; i++) {
            for(int j = 1 ; j < n+1 ; j++) {
                if (S[i] > j) mat[i][j] = mat[i-1][j];
                else {
                    mat[i][j] = mat[i-1][j] + mat[i][j - S[i]];
                }
            }
        }
        return mat[m-1][n];
    }

int main()
{
    int m, n;
    cin >> n >> m;
    int coins[m];
    for(int i = 0 ; i < m ; i++) {
        cin >> coins[i];
    }
    cout << count(coins, m, n) << endl;
    return 0;
}
