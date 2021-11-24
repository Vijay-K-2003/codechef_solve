#include <bits/stdc++.h>
using namespace std;

int* findMaxCrossingSubarray(int[] A, int low, int mid, int high){
    int leftSum = INT_MIN, rightSum = INT_MIN;
    int sum = 0;
    int maxLeft, maxRight;
    for(int i = mid ; i >= low ; i--){
        sum += A[i];
        if(sum > leftSum){
            leftSum = sum;
            maxLeft = i;
        }
    }
    sum = 0;
    for(int j = mid + 1; j < high ; j++){
        sum += A[j];
        if(sum > rightSum){
            rightSum = sum;
            maxRight = j;
        }
    }
    return {maxLeft, maxRight, leftSum+rightSum};
}

int* findMaximumSubarray(int[] A, int low, int high) {
    if (high == low) return {low, high, A[low]};
    else
    {
        int mid = floor((low+high)/2);
        int* left = findMaximumSubarray(A,low,mid);
        int* right = findMaximumSubarray(A,mid+1,high);
        int* cross = findMaxCrossingSubarray(A, low, mid, high);
        if(left[2]>= right[2] and left[2] >=cross[2])   return left;
        else if(right[2]>= left[2] and right[2]>=cross[2]) return right;
        else return cross;
    }
}

int main(){
    vector<int> A({13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7});
    int* ans = findMaximumSubarray(A,0, A.size());
    cout << ans[0] << " " << ans[1] << " " << ans[2] << endl; //end
}