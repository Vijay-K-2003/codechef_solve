#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr.rbegin(), arr.rend());
        
       if(n == 1){
           if(arr[0] > 1){
               cout<<"NO"<<"\n";
           }
           else {
               cout<<"YES"<<"\n";
           }
       }
       else{
           if((arr[0] - arr[1]) > 1){
               cout<<"NO"<<"\n";
           }
           else {
               cout<<"YES"<<"\n";
           }
       }
    }
    return 0;
}
