#include <bits/stdc++.h>
using namespace std;

int subsetSumToK(int arr[], int n, int output[][50], int k){

    if (n == 0) {
        if (k == 0) {
            output[0][0] = 0;
            return 1;
        }
        else {
            return 0;
        }
    }

    int output1[1000][50];
     
    int output2[1000][50];
     
    int size1 = subsetSumToK(arr + 1, n - 1, output1, k - arr[0]);

    int size2 = subsetSumToK(arr + 1, n - 1,
                                output2, k);
 
    int i, j;
    for (i = 0; i < size1; i++) {
         
        output[i][0] = output1[i][0] + 1;
         
        output[i][1] = arr[0];
    }
    
    for (i = 0; i < size1; i++) {
        for (j = 1; j <= output1[i][0]; j++) {
            output[i][j + 1] = output1[i][j];
        }
    }
     
    for (i = 0; i < size2; i++) {
        for (j = 0; j <= output2[i][0]; j++) {
            output[i + size1][j] = output2[i][j];
        }
    }
     
    return size1 + size2;
}
 
void countSubsequences(int arr[], int n, int output[][50], int k)
{  
    int size = subsetSumToK(arr, n, output, k);
     
    for (int i = 0; i < size; i++) {
        for (int j = 1; j <= output[i][0]; j++) {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }   
}

void solve() {
    int b[7];
    for(int i = 0; i < 7; i++) {
        cin >> b[i];
    }
    vector<int> ans;
    // for(int i = 0 ; i < 7; i++) {
    //     vector<int> arr(i-1, 0);
    //     copy(b, b + i - 1 , arr);
    //     if(findSubarraySum(arr, i-1, b[i])==0)
    //         ans.push_back(b[i]);
        
    // }
    // for(int i = 0; i < ans.size(); i++) {
    //     cout << ans[i] << " ";
    // }
    // cout << "\n";
    for()
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    } 

    return 0;
}