#include<bits/stdc++.h>
using namespace std;

string lonestPalindromeSubsequence(string & str){
    int N = str.size();
    vector<vector<int>> dp(N, vector<int>(N,0));
    int maxLen = 0;
    string result = "";
    for(int i=0; i<N; i++){
        dp[i][i] = 1;
        if(maxLen<1){
            maxLen=1;
            result = str.substr(i, 1);
        }
    }
    for(int window = 2; window<= N; window++){
        int i,j;
        for(i=0; i<N-window+1; i++){
            j = i + window-1;
            if(window==2){
              if(str[i]== str[j]){
                dp[i][j]= window;
                if(maxLen<window){
                        maxLen = window;
                        result = str.substr(i,window);
                    }
            }
            else {
                if(str[i] == str[j] && dp[i+1][j-1]>0){
                    dp[i][j]= window;
                    if(maxLen<window){
                        maxLen = window;
                        result = str.substr(i,window);
                    }
                }
            }
        }
    }
    return result;
}