#include<bits/stdc++.h>
using namespace std;

int LongestIncreasingSum(vector<int> &nums){
    int n = nums.size();
    int maxlength =1;
    vector<int> dp(n+1,1);
    for(int i=2; i<n; i++){
        for(int j=0; j<i; j++){
            if(nums[i]> nums[j]){
            dp[i]= max(dp[i], 1+dp[j]);
            maxlength = max(maxlength,dp[i]);
            }
        }
    }
    return maxlength;
}


int main(){

}