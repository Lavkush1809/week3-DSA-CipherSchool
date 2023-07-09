#include<bits/stdc++.h>
using namespace std;

int LongestSumIncreasingSum(vector<int> &nums){
    int n = nums.size();
    int maxlength =1;
    vector<int> dp(n+1);
    for(int i=0; i<n; i++){
        dp[i]= nums[i];
    }
    for(int i=1; i<n; i++){

        for(int j=0; j<i; j++){

            if(nums[i]> nums[j]){

            dp[i]= max(dp[i], nums[i]+dp[j]);
            maxlength = max(maxlength,dp[i]);
            }
        }
    }
    return maxlength;
}