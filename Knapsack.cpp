#include<bits/stdc++.h>
using namespace std;

int Knapsack(const vector<int> &price, const vector<int> &weight, int W){
    int n = price.size();
    vector<vector<int>> dp(n+1, vector<int>(w+1,0));

    for(int i=1; i<=n; i++){
        int wt = weight[i-1], p= price[i-1];

        for(int w = 1; w<=W; w++){
            dp[i][w] = dp[i-1][w]
             if(w >= wt){
                dp[i][w]= max(dp[i][w], p+dp[i-1][w-wt]);
             }
        }
    }
    return dp[n][W];
}