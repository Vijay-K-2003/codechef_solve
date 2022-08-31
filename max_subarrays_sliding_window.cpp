// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> sol;
        std::deque<int> Q(k);
        int i = 0;
        while (i < k) {
            // remove all previous smaller elements
            while (!Q.empty() and arr[i] >= arr[Q.back()]) {
                Q.pop_back();
            }
            // store recent max
            Q.push_back(i);
            i++;
        }
        
        while (i < n) {
            // store solution
            sol.push_back(arr[Q.front()]);
            
            // move window
            while (!Q.empty() and Q.front() <= i-k) {
                Q.pop_front();
            }
            // remove all smaller elements
            while (!Q.empty() and arr[i] >= arr[Q.back()]) {
                Q.pop_back();
            }
            Q.push_back(i);
            i++;
        }
        sol.push_back(arr[Q.front()]);
        
        return sol;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code End
